	.file	"sumup.c"
	.text
	.globl	_sumup
	.def	_sumup;	.scl	2;	.type	32;	.endef
_sumup:
LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %edx
	movl	8(%ebp), %eax
	addl	$4, %eax
	movl	(%eax), %eax
	addl	%eax, %edx
	movl	8(%ebp), %eax
	addl	$8, %eax
	movl	(%eax), %eax
	addl	%edx, %eax
	movl	%eax, -4(%ebp)
	movl	8(%ebp), %eax
	leal	12(%eax), %edx
	movl	-4(%ebp), %eax
	movl	%eax, (%edx)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE0:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
