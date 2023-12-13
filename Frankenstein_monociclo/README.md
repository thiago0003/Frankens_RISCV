# RISCV Monociclo

## Memória 
Para esse tipo de processador, foi utilizado o tipo de memória Harvard, dessa forma, a memória de programa e a memória de dados ficam separadas podendo efetuar uma leitura na memória de programa e uma escrita na memória de dados em um único ciclo. 

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/3/3f/Harvard_architecture.svg/360px-Harvard_architecture.svg.png" alt="Computador iuriCode"> 

### Memória de programa 
* 512 palavaras (32 bits)

### Memória de dados
* 1200 palavras (32 bits)

OBS: Esse tamanho foi definido para que o jogo Game of Life fosse carregado nessa memória onde o VGA posteriormente fará essa leitura para exibir em tela com resolução (atual) de 320x240 pixels.


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
| ⚠️ | sltu     | R-Type | `0000000 \| rs2 \| rs1 \| 011 \| rd \| 0110011`                |
| ☑️ | jal      | J-Type | `imm[20\|10:1\|11\|19:12] \| rd \| 1101111`                    |
| ☑️ | jalr     | I-Type | `imm[11:0] \| rs1 \| 000 \| rd \| 1100111`                     |
| ☑️ | beq      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 000 \| imm[4:1\|11] \| 1100011`|
| ☑️ | bne      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 001 \| imm[4:1\|11] \| 1100011`|
| ☑️ | blt      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 100 \| imm[4:1\|11] \| 1100011`|
| ☑️ | bge      | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 101 \| imm[4:1\|11] \| 1100011`|
| ☑️ | sb       | S-Type | `imm[11:5] \| rs2 \| rs1 \| 000 \| imm[4:0] \| 0100011`        |
| ⚠️ | bltu     | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 110 \| imm[4:1\|11] \| 1100011`|
| ⚠️ | bgeu     | B-Type | `imm[12\|10:5] \| rs2 \| rs1 \| 111 \| imm[4:1\|11] \| 1100011`|
| ❌ | lb       |        |                                                                |
| ⚠️ | lh       |        |                                                                |
| ❌ | lhu      |        |                                                                |
| ⚠️ | sh       |        |                                                                |
| ☑️ | slti     | I-Type | `imm[11:0] \| rs1 \| 010 \| rd  \| 0010011`                    |
| ☑️ | xori     | I-Type | `imm[11:0] \| rs1 \| 100 \| rd  \| 0010011`                    |
| ☑️ | ori      | I-Type | `imm[11:0] \| rs1 \| 110 \| rd  \| 0010011`                    |
| ⚠️ | srai     | I-Type | `0100000 \| shamt \| rs1 \| 101 \| rd \| 0010011`              |
| ☑️ | sll      | R-Type | `0000000 \| rs2 \| rs1 \| 001 \| rd \| 0110011`                |
| ⚠️ | slt      | R-Type | `0000000 \| rs2 \| rs1 \| 010 \| rd \| 0110011`                |
| ☑️ | srl      | R-Type | `0000000 \| rs2 \| rs1 \| 101 \| rd \| 0110011`                |
| ⚠️ | sra      | R-Type | `0100000 \| rs2 \| rs1 \| 101 \| rd \| 0110011`                |
| ☑️ | and      | R-Type | `0000000 \| rs2 \| rs1 \| 111 \| rd \| 0110011`                |
| ❌ | fence    | I-Type |                                                                |
| ❌ | ecall    | I-Type |                                                                |
| ❌ | ebreak   | I-Type |                                                                |

 ☑️  Funcional 
 ⚠️  Ainda não testado
 ❌  Não implementado    
