# RISCV_MultiCiclo
Também conhecido como Frankenstein, tem como objetivo ser um processador de fácil utilização, utilizando apenas memórias SRAM para armazenamento dos dados pois não teremos um pipeline. Dessa forma,não temos um sincronismo entre enviar o endereço e o retorno da instrução. Para faciliar, também utilizaremos o tipo de memória Von Neuman, onde a memória de dados e a memória de instrução estarão em diferentes locais.  

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

## Create a testbench  
* No nosso testbench, devemos importar apenas o .h do nosso módulo top `Vtop.h`, que irá se encontrar dentro da pasta `obj_dir/`.

[Informações sobre testbench](https://itsembedded.com/dhd/verilator_2/)

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

## Instruções Contidas No Processador
Intruções contidas no processador.

|Tipo de instrução| 31 - 25          | 24 - 20 | 19 - 15 | 14 - 12 | 11 - 7       | 6 - 0  |
|:---------------:|:----------------:|:-------:|:-------:|:-------:|:------------:|:------:|
| R-Type          |funct7            | rs2     | rs1     | funct3  | rd           |opcode  |
| S-Type          |imm\[11:5\]       | rs2     | rs1     | funct3  | mm\[4:0\]    |opcode  |
| B-Type          |imm\[12\|10:5\]  | rs2     | rs1     | funct3  | mm\[4:1\|11\]|opcode  |

|Tipo de instrução| 31 - 12                    | 11 - 7 | 6 - 0  |
|:---------------:|:--------------------------:|:------:|:------:|
| U-Type          | imm\[31:12\]               | rd     | opcode |
| J-Type          | imm\[20\|10:1\|11\|19:12\] | rd     | opcode |

|Tipo de instrução| 31 - 20          | 19 - 15 | 14 - 12 | 11 - 7       | 6 - 0  |
|:---------------:|:----------------:|:-------:|:-------:|:------------:|:------:|
| I-Type          |imm\[11:0\]       | rs1     | funct3  | rd           |opcode  |

|    |Instrução |  Tipo  | Instruction Set                                                |
|:--:|:--------:|:------:|:---------------------------------------------------------------|
| ☑️ | add      | R-Type | `0000000 \| rs2 \| rs1 \| 000 \| rd \| 0110011`                |
| ☑️ | addi     | I-Type | `imm[11:0] \| rs1 \| 000 \| rd  \| 0010011`                    |
| ☑️ | jal      | J-Type | `imm[20\|10:1\|11\|19:12] \| rd \| 1101111`                    |
| ☑️ | bge      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 101 \| imm[4:1\|11] \| 1100011`|
| ☑️ | lui      | U-Type | `imm[31:12] \| rd \| 0110111`                                  |
| ☑️ | slli     | I-Type | `0000000 \| shamt \| rs1 \| 001 \| rd \| 0010011`              |
| ☑️ | xor      | R-Type | `0000000 \| rs2 \| rs1 \| 100 \| rd \| 0110011`                |
| ☑️ | or       | R-Type | `0000000 \| rs2 \| rs1 \| 110 \| rd \| 0110011`                |
| ☑️ | sub      | R-Type | `0100000 \| rs2 \| rs1 \| 000 \| rd \| 0110011`                |
| ☑️ | sw       | S-Type | `imm[11:5] \| rs2 \| rs1 \| 010 \| imm[4:0] \| 0100011`        |
| ☑️ | lw       | I-Type | `imm[11:0] \| rs1 \| 010 \| rd  \| 0010011`                    |
| ☑️ | lbu      | I-Type | `imm[11:0] \| rs1 \| 100 \| rd  \| 0010011`                    |




| - | jalr     | I-Type | `imm[11:0] \| rs1 \| 000 \| rd \| 1100111`                     |
| - | sb       | S-Type | `imm[11:5] \| rs2 \| rs1 \| 000 \| imm[4:0] \| 0100011`        |
| - | beq      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 000 \| imm[4:1\|11] \| 1100011`|
| - | blt      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 100 \| imm[4:1\|11] \| 1100011`|
| - | bne      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 001 \| imm[4:1\|11] \| 1100011`|
| - | auipc    | U-Type | `imm[31:12] \| rd \| 0010111`                                  |
