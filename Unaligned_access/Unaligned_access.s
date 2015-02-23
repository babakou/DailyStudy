	.file	"Unaligned_access.c"
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "0x%x\12\0"
	.text
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
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movb	$18, 20(%esp)
	movb	$52, 21(%esp)
	movb	$86, 22(%esp)
	movb	$120, 23(%esp)
	movb	$-102, 24(%esp)
	movb	$-68, 25(%esp)
	movb	$-34, 26(%esp)
	movb	$-16, 27(%esp)
	movl	$0, 28(%esp)
	jmp	L2
L3:
	movl	28(%esp), %eax
	leal	20(%esp), %edx
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	addl	$1, 28(%esp)
L2:
	cmpl	$4, 28(%esp)
	jle	L3
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE7:
	.ident	"GCC: (GNU) 4.8.3"
	.def	_printf;	.scl	2;	.type	32;	.endef
