	section .data
arrayB	db	"ASM 02418331",10,0
arrayW	dw	100h,200h,300h, 400h
arrayD	dd 01234567h,89ABCDEFh

	section .text
		global _start
_start:
		mov al, byte [arrayB]	; same as [arrayB]
		mov ah, byte [arrayB+5]	; same as [arrayB+5]
		mov bx, word [arrayW+2]	; same as [arrayW+2]
		mov ecx,dword [arrayD]	; same as arrayD
		mov edx,dword [arrayD+2]	; same as arrayD[2]

; Register Indirect Addressing
		mov ecx, arrayB+3
		mov edx, arrayW+1
		mov bx, word [ecx]	; address in [ecx]
		mov al,byte [edx]	; address in [edx]

; Based Addressing
		mov edx, 4
		mov al, byte [arrayB+edx]
		mov bx, word [arrayW+esi+edx]
		mov ecx,dword [arrayD+edx]

		mov esi, 1
		mov byte [arrayB+(esi*2)], 'S'
		mov word [arrayW+(esi*2)], 102h
		mov dword [arrayD+(esi*4)], 0

        mov rax, 60
        mov rdi, 0
        syscall
