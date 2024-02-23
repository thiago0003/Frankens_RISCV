# RISCV 

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/3/3f/Harvard_architecture.svg/360px-Harvard_architecture.svg.png" alt="Computador iuriCode"> 

Idealmente o projeto foi dividido em grandes blocos, sendo eles:
* Frankenstein, nosso processador. Esse nome foi escolhido pois não havia um único material que fosse necessário para a criação de um processador do zero com todas as intruções e de fácil entendimento dessa forma, o compilado de documentos, projetos e documentações foi escolhido o nome de Frankenstein.  

* Memória RAM ou BlockRAM, tem esse nome pois não é implementado com LUTs. Esse tipo de memória está presente dentro da FPGA é mapeada de forma direta pelo YOSYS como uma memória volátil, dessa forma não é necessário implementar um módulo de RAM que seja otimizado, o YOSYS se encarrega disso além de não pagar IPs para esse bloco. 
    |    |Tipo           | Tamanho                |
    |:--:|:-------------:| :---------------------:|
    | ☑️ | Memória       | 512 words - 16384 bits |
    | ⚠️ | Memória SPI   | 32 Mbits               |

    Atualmente está implementado uma memória de programa SPI e uma memória RAM volátil de 16 Kbits.
    * Idealmente essa memória RAM será espandida para até 24 Mbits como nos processadores ARM (nrf52810).

* Registers ou banco de registradores, também mapeado como uma forma de BlockRAM pelo YOSYS, essa memória é de uso exclusivo do processador e tem seus registradores dados por:

    |Registrador| Nome ABI | Descrição     | Presenciado em toda chamada |
    |:---------:|:--------:|:-------------:|:---------------------------:|
    |   X0      | Zero     | Zero hardwired| -                           |
    |   X1      | ra       |Endereço de retorno| Não|
    |X2|sp|Ponteiro de pilha|Sim|
    |X3|gp|Ponteiro global| - |
    |X4|tp|Ponteiro de threads| - |
    |X5|t0|Registrador de link temporário/alternativo| Não|
    |X6-X7|t1-t2|Temporários|Não|
    |X8|s0/fp|Registrador salvo/Ponteiro de quadro|Sim|
    |X9|s1|Registrador salvo|Sim|
    |X10-X11|a0-a1|Argumento de função/Valores de retorno|Não|
    |X12-X17|a2->a7|Argumentos de função|Não|
    |X18-X27|s2->s11|Registradores salvos|Sim|
    |X28-31|t3->t6|Temporários|Não|


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

### RV32I

|    |Instrução |  Tipo  | Instruction Set                                                |
|:--:|:--------:|:------:|:---------------------------------------------------------------|
| ☑️ | add      | R-Type | `0000000 \| rs2 \| rs1 \| 000 \| rd \| 0110011`                |
| ☑️ | addi     | I-Type | `imm[11:0] \| rs1 \| 000 \| rd  \| 0010011`                    |
| ☑️ | sub      | R-Type | `0100000 \| rs2 \| rs1 \| 000 \| rd \| 0110011`                |
| ☑️ | andi     | I-Type | `imm[11:0] \| rs1 \| 111 \| rd  \| 0010011`                    |
| ☑️ | or       | R-Type | `0000000 \| rs2 \| rs1 \| 110 \| rd \| 0110011`                |
| ☑️ | slli     | I-Type | `0000000 \| shamt \| rs1 \| 001 \| rd \| 0010011`              |
| ☑️ | srli     | I-Type | `0000000 \| shamt \| rs1 \| 101 \| rd \| 0010011`              |
| ☑️ | auipc    | U-Type | `imm[31:12] \| rd \| 0010111`                                  |
| ☑️ | lw       | I-Type | `imm[11:0] \| rs1 \| 010 \| rd  \| 0010011`                    |
| ☑️ | sw       | S-Type | `imm[11:5] \| rs2 \| rs1 \| 010 \| imm[4:0] \| 0100011`        |
| ☑️ | lui      | U-Type | `imm[31:12] \| rd \| 0110111`                                  |
| ☑️ | xor      | R-Type | `0000000 \| rs2 \| rs1 \| 100 \| rd \| 0110011`                |
| ☑️ | lbu      | I-Type | `imm[11:0] \| rs1 \| 100 \| rd  \| 0010011`                    |
| ☑️ | sltiu    | I-Type | `imm[11:0] \| rs1 \| 011 \| rd  \| 0010011`                    |
| ☑️ | sltu     | R-Type | `0000000 \| rs2 \| rs1 \| 011 \| rd \| 0110011`                |
| ☑️ | jal      | J-Type | `imm[20\|10:1\|11\|19:12] \| rd \| 1101111`                    |
| ☑️ | jalr     | I-Type | `imm[11:0] \| rs1 \| 000 \| rd \| 1100111`                     |
| ☑️ | beq      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 000 \| imm[4:1\|11] \| 1100011`|
| ☑️ | bne      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 001 \| imm[4:1\|11] \| 1100011`|
| ☑️ | blt      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 100 \| imm[4:1\|11] \| 1100011`|
| ☑️ | bge      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 101 \| imm[4:1\|11] \| 1100011`|
| ☑️ | sb       | S-Type | `imm[11:5] \| rs2 \| rs1 \| 000 \| imm[4:0] \| 0100011`        |
| ☑️ | bltu     | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 110 \| imm[4:1\|11] \| 1100011`|
| ☑️ | bgeu     | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 111 \| imm[4:1\|11] \| 1100011`|
| ☑️ | lb       | I-Type | `imm[11:0] \| rs1 \| 000 \| rd  \| 0000011`                    |
| ☑️ | lh       | I-Type | `imm[11:0] \| rs1 \| 001 \| rd  \| 0000011`                    |
| ☑️ | lhu      | I-Type | `imm[11:0] \| rs1 \| 100 \| rd  \| 0000011`                    |
| ☑️ | sh       | S-Type | `imm[11:5] \| rs2 \| rs1 \| 001 \| imm[4:0] \| 0100011`        |
| ☑️ | slti     | I-Type | `imm[11:0] \| rs1 \| 010 \| rd  \| 0010011`                    |
| ☑️ | xori     | I-Type | `imm[11:0] \| rs1 \| 100 \| rd  \| 0010011`                    |
| ☑️ | ori      | I-Type | `imm[11:0] \| rs1 \| 110 \| rd  \| 0010011`                    |
| ☑️ | srai     | I-Type | `0100000 \| shamt \| rs1 \| 101 \| rd \| 0010011`              |
| ☑️ | sll      | R-Type | `0000000 \| rs2 \| rs1 \| 001 \| rd \| 0110011`                |
| ☑️ | slt      | R-Type | `0000000 \| rs2 \| rs1 \| 010 \| rd \| 0110011`                |
| ☑️ | srl      | R-Type | `0000000 \| rs2 \| rs1 \| 101 \| rd \| 0110011`                |
| ☑️ | sra      | R-Type | `0100000 \| rs2 \| rs1 \| 101 \| rd \| 0110011`                |
| ☑️ | and      | R-Type | `0000000 \| rs2 \| rs1 \| 111 \| rd \| 0110011`                |
| ❌ | fence    | I-Type |                                                                |
| ❌ | ecall    | I-Type |                                                                |
| ❌ | ebreak   | I-Type |                                                                |

### RV32M
|    |Instrução |  Tipo  | Instruction Set                                                |
|:--:|:--------:|:------:|:---------------------------------------------------------------|
| ☑️ | mul      | R-Type | `0000001\| rs2 \| rs2 \| 000 \| rd \| 0110011` |
| ☑️ | mulh     | R-Type | `0000001\| rs2 \| rs2 \| 001 \| rd \| 0110011` |
| ☑️ | mulhsu   | R-Type | `0000001\| rs2 \| rs2 \| 010 \| rd \| 0110011` |
| ☑️ | mulhu    | R-Type | `0000001\| rs2 \| rs2 \| 011 \| rd \| 0110011` |
| ❌ | div      | R-Type | `0000001\| rs2 \| rs2 \| 100 \| rd \| 0110011` |
| ❌ | divu     | R-Type | `0000001\| rs2 \| rs2 \| 101 \| rd \| 0110011` |
| ❌ | rem      | R-Type | `0000001\| rs2 \| rs2 \| 110 \| rd \| 0110011` |
| ❌ | remu     | R-Type | `0000001\| rs2 \| rs2 \| 111 \| rd \| 0110011` |


 ☑️  Funcional 
 ⚠️  Ainda não testado
 ❌  Não implementado    

 * Vale lembrar que todo processode multiplicação pode ser substituído por um operador `sll` ou uma conbinação deles uma vez que o processo de multiplicação é custoso para o processador.
 * O processo de multiplicação é ainda mais custoso perante ao processador, é declarado STALL no pipeline isso é, todos as outras intruções que estão por vir no pipeline terão que esperar o processo de divisão. Também é possível substituir uma divisão inteira por  deslocadores, somadores e subtratores. 

 *Para quase todos processadores, multiplicações são mais lentas que deslocamentos ou adições e divisões são muito mais lentas que multiplicações* - Guia Pŕatico RISC-V (uma ótima opção de leitura).


## Desenvolvimento
| Estado |Requisitos| Descrição |
|:------:|:--------:|:---------:|
| ⚠️     | 4- UART  | Implementação do protocolo de comunicação, atualmente em fase de teste de no envio de informações |
| ☑️     | 1- SPI Slave  | Utilizado para a memória de programa |
| ⚠️     | 1- SPI Master | Utilizado para gravar dados na memória sem afetar a memória de programa |
| ❌     | 1- SPI Slave  | Utilizado para consumir dados do System Clock|
| ❌     | 1- SPI Master | Utilizado para o protocolo de comunicação do projeto|
| ❌     | 1- DMA        | Ainda em viabilização |

⚠️ Em desenvolvimento
❌ Parado
☑️  Funcional

### IO
Alguns problemas percebidos recentemente ao trabalhar com os IOs, os registradores devem ser inicializados com Zero sempre que não carregado um valor previamente dentro deles. 
Para isso, pode-se utilizar `addi regDest, x0, 0` dessa forma, será carregado zero no `regDest` e impedirá possíveis transtornos. 

#### UART
UART está definida no bit 24 do DMA, foi criado um mapa de IOs UART. Dessa forma, podemos passar o bit 24 para indicar que vamos utilizar UART junto com os bits conforma a tabela abaixo.

|Posição do bit| Informação|
|:-------:|:-----:|
|24| Seta a utilização do UART|
|6| Full Duplex RX_TX_0 (Envia e recebe dados)|
|5| Half Duplex TX_0 (Envia os dados)|
|4| Half Duplex RX_0 (recebe os dados)|
|3:0 | Busca na memória do buffer o valor contido caso seja solicitado| 

### Memória de programa 
Foi implementado a memória de programa em SPI, para acesso a memória SPI é utilizado o bit 23 do endereço. Dessa forma, é inicializado a memória de programa com `32'h00400001`, sendo o último bit para defirnir que iremos ler a memória. 

Para leitura da memória é utilizado da mesma forma o bit 23 porém com a instrução `SW`, possivelmente será trocado para `LW` a leitura e `SW` a gravação. Deverá ser implementado uma verificação para o dados não ser gravado dentro da memória de programa. 

Para subir o programa utilizamos o comando `openFPGALoader -b tangnano9k --external-flash prog.bin -o 0x00400000`, dessa forma, nossa memória de programa irá inicializar em 

# Links e DOCS

[YOSYS memory map](https://yosyshq.readthedocs.io/projects/yosys/en/latest/CHAPTER_Memorymap.html)
[Bruno Levi - Blink from RISC-V](https://github.com/BrunoLevy/learn-fpga/tree/master/FemtoRV/TUTORIALS/FROM_BLINKER_TO_RISCV)
[YOSYS parameters](https://yosys.readthedocs.io/_/downloads/en/latest/pdf/)