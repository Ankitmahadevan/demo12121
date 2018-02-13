.text
.globl main
main:

li $v0,5
move $t0,$v0
syscall

move $a0,$t0
jal fac
move $s1,$v0

li $v0,4
la $a0,msg
syscall

li $v0,1
move $a0,$s1
syscall

li $v0,10
syscall

fac:
lw $t1,x
lw $t2,y

loop:

bgt $t1,$a0,exit
mul $t2,$t2,$t1
add $t1,$t1,1
b loop

exit:
move $v0,$t2

jr $ra

.data
x: .word 1
y: .word 1
msg: .asciiz "factorial="
