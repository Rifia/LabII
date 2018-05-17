.model tiny 
    org 100h 
.data 
    a db -4 
    b db -8
    result db 0
.code 
    mov al,[a] 
    mov bl,[b]
    cmp al, bl
    jl m1
    jz m2
    jg m3
m1:
	cmp [a],0
    jz exit
    mov al,[b]
    mov bl,[a]
    CBW
    idiv bl
    add al, 5
    mov [result],al
    jmp exit
m2:
    mov [result],25
    jmp exit
m3:
    cmp [b],0
    jz exit
    CBW
    sub al,5
    idiv bl
    mov [result],al
exit:
ret
