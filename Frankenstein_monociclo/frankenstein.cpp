#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/VCPU_RISCV.h"
#include "obj_dir/Vmem.h"
#include "obj_dir/Vtop.h"
#include "obj_dir/Vvga.h"

#define MAX_TIME 20
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env)
{
    Vtop *top = new Vtop;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    top->reset = 1;
    top->eval();
    sim_time ++;

    while(sim_time < MAX_TIME)
    {
        top->clk^=1;
        top->reset=0;
        top->eval();
        m_trace->dump(sim_time);
        sim_time ++;
    }

    m_trace->close();
    delete top;
    exit(EXIT_SUCCESS);

}