# RISCV

## Status 
Criando as funções no monociclo

## Run Quartus 
`export QUARTUS_PATH="/home/martins/intelFPGA_lite/22.1std/quartus/bin"`

`export PATH=$PATH:$QUARTUS_PATH`

`make -f ../Makefile program`

## Install 
### Verilator
`sudo apt-get install git help2man perl python3 make autoconf g++ flex bison ccache`

`sudo apt-get install libgoogle-perftools-dev numactl perl-doc`

`git clone https://github.com/verilator/verilator`

`cd verilator`

`unset VERILATOR_ROOT`

`autoconf`

`./configure`

`make -j 'nproc`

`sudo make install`

### GTK Wave
`sudo apt-get -y install gtkwave`

## Run Frankenstein: 
* Foi desenvolvido um script para executar automaticamente o verilator: `./verilator.sh`

* Após rodar o comando acima será gerado uma pasta de build: `obj_dir`
* Deverá ser executado `./Vtop`
* Como especificamos no programa `frankenstein.cpp` temos nosso `waveform.vcd` que deverá ser aberto no GTK Wave para visualizarmos em forma de onda.  

### Alterações na compilação 
* OBS: Devemos colocar os módulos de compilação na ordem inversa pois para gerar primeiro os módulos filhos. 

### Waveform
Uma vez aberto nosso arquivo no GTK-Wave não é necessário sair e abrir novamente, o GTK-Wave tem um botão de reload para recarregar os arquivos. Dessa forma não perdemos o que já foi alterado na visualização.  