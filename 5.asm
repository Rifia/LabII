.model tiny 
    org 100h 
.data
	str db 'Kol-vo elementov: ','$'
    n dw 10 
    A dw 1,2,3,4,5,6,7,8,9,10 
    c dw 2
    d dw 6
    k dw 0
.code 
    mov cx, n
    mov si, 0
for:
    mov ax,A[si]
    cmp ax,[c]
    jl no
    cmp ax,[d]
    jg no
    inc [k]
no:
    add si,2
    loop for
    
    mov ah, 9
	mov dx, offset str
	int 21h
	xor cx, cx
	mov ax, k
 
num:         ;vyvod chisla na ekran
    inc cx          
    xor dx, dx
    mov bx, 10
    div bx
    push dx
    cmp ax, 0
    jne num
print:         
    mov ah, 02h    
    xor dx, dx
    pop dx
    add dx, 30h
    int 21h
    loop print  
ret
