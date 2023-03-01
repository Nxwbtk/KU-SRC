section  .text
global _start
_start:
    mov ax, 20
    mov bx, 10
    mov dx, 0
    cmp ax,bx
    jg _NEXT
    add dx,bx
    mov cx,dx
    mov rax, 60
    mov rdi, 1
    syscall
_NEXT:
    sub ax,dx
    mov dx,ax
