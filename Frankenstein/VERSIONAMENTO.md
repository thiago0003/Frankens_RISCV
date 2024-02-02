# Versões do projeto 
Esse documento tem como objetivo desenhar um design de solução para o RISC-V que busca integrar o projeto HID com o projeto Chip Inventor. De maneira geral, esses dois projetos utilizam do RISC-V com diferentes objetivos contudo, a HID quer desenvolver o processador dentro da plataforma Chip Inventor.

## Como eu entendo o projeto 
O projeto RISC-V é densenvolvido em formato de espirarl isso é, a cada iteração do projeto é desenvolvido uma nova funcionalidade. A concepção do RISC-V própria trás consigo esse esquema de desenvolvimento uma vez que sua documentação é dividida em:
* RISC-V(I): Tipos de intruções inteiras
* RISC-V(IM): Inteiros + Multiplicação
* RISC-V(IMA): Inteiros + Multiplicação + Atomic
* RISC-V(IMAF): Inteiros + Multiplicação + Atomic + Float (Single Precision)
* RISC-V(G) ou (IMAFD): Inteiros + Atomic + Float + Double
<br>

Além dos módulos a serem desenvolvido temos protocolos de comunicação:
* UART
* I2C
* SPI

<b>Todos os módulos do processador podem contem os protocolos de comunicação</b>
<br>
Atualmente, em desenvolvimento está o módulo `RISC-V(IM)` junto com o protocolo `UART`

## Von Braun academy 
Como já sabemos, teremos nossa academia voltado para cursos dentro da plataforma. Da forma que está estruturado, não teriamos como entregar um cursos de RISC-V avançado, de forma a ensinar o aluno como é o desenvolvimento do chip "por baixo dos panos". Além de quebrar o paradigma do projeto RISC-V que é o desenvolvimento de um produto que seja voltado para suas necessidades "sem ter uma bazuca para matar uma barata". Isso é, teriamos apenas um processador genérico que possivelmente atenda todas as necessidades mas que cumpre papeis a mais, ocupando uma maior área desnecessária no silício. 

## HID 
Não sei o que está acontecendo nesse projeto, não sei as necessidades do projeto. Tem 1 grupo em que jogam informações que eu não consigo e não tenho tempo para acompanhare o JIRA em que basicamente está estruturado apenas um projeto da HID que contempla o processador (aqui eu estou ainda mais perdido).

## Como eu dividiria o desenvolvimento 
**Olhando para essas duas frentes diferentes, Von Braun Academy e HID.**
<br>
A ideia é segmentar o projeto e estruturar um projeto RISC-V dentro da plataforma Chip Inventor mas que seja independente de projetos, uma vez que *possivelmente e muito em breve* esse chip possa ser utilizado em outros projetos com outras parcerias, e além disso, conter uma documentação compartilhada e individual para cada módulo. Dessa forma, até para subir para plataforma, quando um usuário for criar seu projeto utilizando um RSIC-V nosso, ele poderia ler essa documentação.

### Divisão do problema
Como citado, já estamos na fase de desenvolvimento das instruções de divisão e multiplicação. A ideia é:
1. Terminar o desenvolvimento dessas intruções. 
2. Começar o desenvolvimento dos protocolos de comunicação
3. Dividir o projeto em RISC-V(I) e RISC-V(IM) e documentá-los
4. Entender os requisitos que necessitam ser desenvolvidos para o projeto da HID
    * Relógio para registrar o horário da captura do sensor
    * Protocolos de comunicação novos que serão utilizados 
5. Verificação e otimização 
6. Desenvolvimento de novas instruções 

### Como organizar o desenvolvimento: GIT
Pensei seriamente em estruturar uma arquitetura dentro do próprio GIT HUB, uma vez que haverá uma centralização do projeto, é possível desenvolver uma página WEB de documentação dentro do github (https://docs.github.com/pt)(https://pages.github.com/) e também é possível utilizar ferramentas iguais a do JIRA dentro dele (https://github.com/features/issues). É possível centralizar problemas com o GITHUB issue (exemplo pandas)(https://github.com/pandas-dev/pandas/issues) e dessa forma é possível ver os problemas a serem resolvidos, quem está resolvendo e gerar um "chat" para discuções sobre o problema.  

## Sugestão de alteração de nome
Conversando com o Augusto, o nome Frank RISC-V talvez não seja interessante para plataforma. ALgumas indeias surgiram como `SATURNO-V`, sendo referência forte ao **Von Braun**.

