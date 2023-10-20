global	main
	extern	printf
main:
	mov	rdi,fmt
	mov	rsi,msg
	push 	rbp
	call	printf
	mov	rax,0
	pop	rbp
	ret
msg: db 'Hello, Holberton', 0
fmt: db "%s", 10, 0
