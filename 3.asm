.model tiny 
org 100h 
.data 
str db 'ERROR! null a','$' 
c dw -1 
d dw 1 
a db 8
t dw -2
q db 0 
et dw 82 
result dw 0 
.code 

mov ax,[t] ;-2*c=2 
imul [c]     ;ax=2

mov [t], ax  ;two=-2*c=2
mov ax, 0    ;ax=0

mov ax, [d]  ;d*82=0 
imul [et]    ;ax=0

add ax, [t] ;ax=-2*c+d*82=2

mov [c], ax   ;c=2(chislitel)    
mov ax, 0

mov cl, [a]
cmp cl, 4
jz exitnull
shr cl, 2
sub cl, 1 

mov [q], cl  ;q=1(znamenatel)
mov cx, 0      

mov ax, [c]
mov bl, [q]
div bl

mov [result], ax


jmp exit 
exit: 
ret 
exitnull: 
mov ah, 9 
mov dx, offset str 
int 21h  
ret
