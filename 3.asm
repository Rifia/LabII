
.model tiny 
    org 100h  
.data 
    a dd 8 
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
	shr cx, 2
	dec cx
	
	mov bx, ax 
	idiv cx   
	
	mov result, bx
ret  
