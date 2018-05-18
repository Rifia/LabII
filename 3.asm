.model tiny 
org 100h 
.data 
str db 'ERROR! null a','$' 
a dd 0 
c dd -1 
d dd 0 
result dd 0 
.code 
mov ax,[c] 
mov bx, -2 
imul bx 

xor bx, bx 

mov cx, [d] 
mov bx,82 
imul bx 

xor bx,bx 

add ax, cx 

xor cx, cx 

mov cx, [a] 
cmp cx,0 
jz exitnull 
shr cx, 2 
dec cx 

mov bx, ax 
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
