# RISCV_MultiCiclo

## Install 
### Verilator
`sudo apt-get install git help2man perl python3 make autoconf g++ flex bison ccache`

`sudo apt-get install libgoogle-perftools-dev numactl perl-doc`

`git clone https://github.com/verilator/verilator`

`cd verilator`

`unset VERILATOR_ROOT`

`autoconf`

`./configure`

`make -j ```nproc````

`sudo make install`

### GTK Wave
`sudo apt-get -y install gtkwave`

## Create a testbench

* Para criarmos nosso testbench devemos incluir primeiramente os módulos que serão utilizados. Para cada módulo será gerado um .h com Vtop (lembrando que top é nosso top level).
* Após isso, instanciamos nosso top level Vtop *nome = new Vtop  

## Run Frankenstein: 

`verilator -Wno-STMTDLY --trace --exe --build -cc frankenstein.cpp mem.v CPU_RISCV.v top.v`

* OBS: Devemos colocar os módulos de compilação na ordem inversa pois para gerar primeiro os módulos filhos. 

* Após rodar o comando acima será gerado uma pasta de build: `obj_dir`
* Deverá ser executado `./Vtop`
* Como especificamos no programa `frankenstein.cpp` temos nosso `waveform.vcd` que deverá ser aberto no GTK Wave para visualizarmos em forma de onda.  
