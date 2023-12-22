#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "obj_dir/Vtop.h"


#define MAX_TIME 20000
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env)
{
    Vtop *top = new Vtop;
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    top->trace(m_trace, 5);
    m_trace->open("waveform.vcd");

    //top->reset=1;
 
    while(sim_time < MAX_TIME)
    {
        // if(top->reset && sim_time == 1)
        // {
        //     top->reset=0;
        //     sim_time ++;
            
        //     top->eval();
        //     m_trace->dump(sim_time);
        // } 

        top->clk^=1;
        sim_time ++;

        top->eval();
        m_trace->dump(sim_time);
    }

    m_trace->close();
    delete top;
    exit(EXIT_SUCCESS);
}
