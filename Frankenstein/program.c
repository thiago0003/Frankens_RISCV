#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define UART_0_RX 16
#define UART_0_TX 32
#define UART_0_TX_RX 64

// int uart[13];

// void IOs(int value)
// {
//     register int LED_addr asm("t0");

//     __asm__ (
//         "addi %0, %0, 1\n" 
//         "slli %0, %0, 23\n"
//         "addi %0, %0, 1\n"
//         : "+r" (LED_addr)
//     );

//     __asm__ (
//         "sw %0, (t0)"
//         : "+r" (value)
//     );
    
// }

int uart_0(int i, int UART_map)
{
    // bit 4 or int 16 -> corresponding UART_0 RX
    // bit 5 or int 32 -> corresponding UART_0 TX
    // bit 6 or int 64 -> corresponding UART_0 TX and RX

    register int UART_addr asm("t0");
    register int UART_RX asm("a6");
    UART_RX = 0;
    UART_addr = 0;

    __asm__ (
        "addi %0, %0, 1\n" 
        "slli %0, %0, 24\n"
        "add %0, %0, %1\n"
        : "+r" (UART_addr)
        : "r" (UART_map)
    );
    
    if(UART_map == UART_0_TX)
    {
        __asm__ (
            "sw %0, (t0)"
            : "+r" (i)
        );

        return -1;
    }
    else if (UART_map == UART_0_RX)
    {
        __asm__ (
            "add t0, t0, %0 \n"
            "lw a6, 0(t0)"
            : "+r" (i)
        );

        return UART_RX;
    }
    else
    {
        __asm__ (
            "sw %0, 0(t0)\n"
            "add t0, t0, %0\n"
            "lw a6, 0(t0)"
            : "+r" (i)
        );

        return UART_RX;
    }
}

void main(void)
{
    int i = 0;

    while(1)
    {
        uart_0(i, UART_0_TX);
        
        if(i > 6)
            i = 0; 
        else
            i++;
    }
}