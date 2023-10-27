transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -vlog01compat -work work +incdir+/home/martins/Documents/RISC_V {/home/martins/Documents/RISC_V/top.v}
vlog -vlog01compat -work work +incdir+/home/martins/Documents/RISC_V {/home/martins/Documents/RISC_V/CPU_RISCV.v}
vlog -sv -work work +incdir+/home/martins/Documents/RISC_V {/home/martins/Documents/RISC_V/mem.sv}

