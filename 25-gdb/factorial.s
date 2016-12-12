	.file	"factorial.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Enter the number:"
.LC1:
	.string	"%d"
.LC2:
	.string	"The factorial of %d is %d\n"
	.text
	.p2align 4,,15
.globl main
	.type	main, @function
main:
.LFB11:
	.cfi_startproc
	subq	$24, %rsp
	.cfi_def_cfa_offset 32
	movl	$.LC0, %edi
	xorl	%eax, %eax
	call	printf
	leaq	12(%rsp), %rsi
	xorl	%eax, %eax
	movl	$.LC1, %edi
	call	__isoc99_scanf
	movl	12(%rsp), %esi
	movl	$1, %edx
	movl	$1, %eax
	testl	%esi, %esi
	jle	.L3
	.p2align 4,,10
	.p2align 3
.L6:
	imull	%eax, %edx
	addl	$1, %eax
	cmpl	%esi, %eax
	jle	.L6
.L3:
	movl	$.LC2, %edi
	xorl	%eax, %eax
	call	printf
	addq	$24, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE11:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.4.7 20120313 (Red Hat 4.4.7-17)"
	.section	.note.GNU-stack,"",@progbits
