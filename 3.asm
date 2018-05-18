.model tiny 
org 100h 
.data 
str db 'ERROR! null a','$' 
c dw -1 
d dw 0 
a db 8
t dw -2
q db 0 
et dw 82 
result dw 0 
.code 

mov ax,[t] ;-2*c
imul [c]     ;ax

mov [t], ax  ;t=-2*c
mov ax, 0    

mov ax, [d]  ;d*82 
imul [et]    ;ax

add ax, [t] ;ax=-2*c+d*82

mov [c], ax   ;c(chislitel)    
mov ax, 0

mov cl, [a]
cmp cl, 4
jz exitnull
shr cl, 2   
sub cl, 1  

mov [q], cl  ;q(znamenatel)
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
