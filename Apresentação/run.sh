BOARD=tangnano9k

openFPGALoader -b ${BOARD} top.fs -f

openFPGALoader -b tangnano9k --external-flash prog.bin -o 0x00400000