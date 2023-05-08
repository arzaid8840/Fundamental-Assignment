	.intel_syntax noprefix
	.global RCT
RCT:

	add rdi, rsi
	mov rax, rdi
	mov rcx, 2
	mul rcx
	ret
