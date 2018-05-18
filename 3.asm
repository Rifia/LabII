.model tiny 
org 100h 
.data 
str db 'ERROR! null a','$' 
a db 8 
c db -1 
d db 0
two db -2
et db 82 
result dw 0 
.code  

mov al,[c] 
CBW 
imul [two]  

mov cl, [d]
CBW 
imul [et]

add ax, cx 

xor cx, cx

mov cl, [a] 
cmp cl,4 
jz exitnull
mov bl, 4 
CBW
idiv bl
sub cx, 1 

xor bx, bx 

mov bx, ax
CBW 
idiv cx 

mov result, bx
jmp exit 
exit: 
ret 
exitnull: 
mov ah, 9 
mov dx, offset str 
int 21h 
ret
