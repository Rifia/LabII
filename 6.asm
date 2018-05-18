.model tiny 
org 100h 
.data
sum dw 0  
N dw 4

.code
mov cx,[N]
mov ax,00
summa:
add ax,cx
loop summa

mov sum, ax       

ret
