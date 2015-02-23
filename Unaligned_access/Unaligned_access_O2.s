	.file	"Unaligned_access.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "0x%x\12\0"
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
	pushl	%esi
	pushl	%ebx
	andl	$-16, %esp
	subl	$32, %esp
	.cfi_offset 6, -12
	.cfi_offset 3, -16
	call	___main
	leal	24(%esp), %ebx
	movb	$18, 24(%esp)
	leal	29(%esp), %esi
	movb	$52, 25(%esp)
	movb	$86, 26(%esp)
	movb	$120, 27(%esp)
	movb	$-102, 28(%esp)
	movb	$-68, 29(%esp)
	movb	$-34, 30(%esp)
	movb	$-16, 31(%esp)
L3:
	movl	(%ebx), %eax
	addl	$1, %ebx
	movl	$LC0, (%esp)
	movl	%eax, 4(%esp)
	call	_printf
	cmpl	%esi, %ebx
	jne	L3
	leal	-8(%ebp), %esp
	xorl	%eax, %eax
	popl	%ebx
	.cfi_restore 3
	popl	%esi
	.cfi_restore 6
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7:
	.ident	"GCC: (GNU) 4.8.3"
	.def	_printf;	.scl	2;	.type	32;	.endef
