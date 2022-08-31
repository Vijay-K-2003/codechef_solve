	.file	"prog1.c"
	.text
	.globl	__sum
	.def	__sum;	.scl	2;	.type	32;	.endef
__sum:
LFB0:
	.cfi_startproc
	movl	8(%esp), %eax
	addl	4(%esp), %eax
	ret
	.cfi_endproc
LFE0:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
