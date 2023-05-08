	.include "console.i"
	.start main

main:	getint askl
	mov rdi, rax
	getint askb
	mov rsi, rax

	call RCT
	putint tell
	ret

askl:	.string "Enter the length: "
askb:	.string "Enter the breadth: "

tell:	.string "Parameter of rectangle: "
	.end
