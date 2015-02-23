	.file	"Endian.cpp"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "0x%x\12\0"
LC1:
	.ascii "0x%x\0"
	.section	.text.startup,"x"
	.p2align 4,,15
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB7:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	.cfi_offset 3, -12
	xorl	%ebx, %ebx
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	xorl	%eax, %eax
	movl	$2018915346, 28(%esp)
L3:
	movsbl	28(%esp,%eax), %eax
	addl	$1, %ebx
	movl	$LC0, (%esp)
	movl	%eax, 4(%esp)
	call	_printf
	cmpl	$4, %ebx
	movl	%ebx, %eax
	jne	L3
	movl	$2018915346, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	xorl	%eax, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7:
	.ident	"GCC: (GNU) 4.8.3"
	.def	_printf;	.scl	2;	.type	32;	.endef
