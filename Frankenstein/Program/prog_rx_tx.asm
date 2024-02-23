.text   
main:
	addi ra, zero, 0
.L4:
        li      ra,1
        slli    ra,ra,24
        addi    ra,ra,64
        li	s1, 0
        j       .L2
.L3:
        sw      s1,0(ra)
        addi    s1,s1,1
        add 	ra, ra, s1
.L2:
        li      a5,12
        ble     s1,a5,.L3
        j       .L4