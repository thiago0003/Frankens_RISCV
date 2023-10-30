# RISCV_MultiCiclo
Também conhecido como Frankenstein, tem como objetivo ser um processador de fácil utilização, utilizando apenas memórias SRAM para armazenamento dos dados pois não teremos um pipeline. Dessa forma,não temos um sincronismo entre enviar o endereço e o retorno da instrução. Para faciliar, também utilizaremos o tipo de memória Von Neuman, onde a memória de dados e a memória de instrução estarão em diferentes locais.  

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

## Create a testbench  
* No nosso testbench, devemos importar apenas o .h do nosso módulo top `Vtop.h`, que irá se encontrar dentro da pasta `obj_dir/`.

### BUGS
* Como nosso tempo está definido em 1ps, o nosso reset não erá aparecer como uma onda longa no waveform, mas está sendo setado.  

### Flags inportantes 

* `/* verilator lint_off DECLFILENAME */` :
* `/* verilator lint_off WIDTHTRUNC */` :
* `/* verilato lint_off MULTITOP */` :
* `/* verilator lint_off UNUSEDSIGNAL */` :
* `/* verilator lint_off WIDTHEXPAND */` :

## Run Frankenstein: 
* Foi desenvolvido um script para executar automaticamente o verilator: `./verilator.sh`

* Após rodar o comando acima será gerado uma pasta de build: `obj_dir`
* Deverá ser executado `./Vtop`
* Como especificamos no programa `frankenstein.cpp` temos nosso `waveform.vcd` que deverá ser aberto no GTK Wave para visualizarmos em forma de onda.  

### Alterações na compilação 
* OBS: Devemos colocar os módulos de compilação na ordem inversa pois para gerar primeiro os módulos filhos. 

### Waveform
Uma vez aberto nosso arquivo no GTK-Wave não é necessário sair e abrir novamente, o GTK-Wave tem um botão de reload para recarregar os arquivos. Dessa forma não perdemos o que já foi alterado na visualização.  