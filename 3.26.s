	.file	"3.26.c"
	.text
	.p2align 4
	.globl	test_one
	.type	test_one, @function
test_one:
.LFB11:
	.cfi_startproc
	movl	$1, %eax
	testl	%edi, %edi
	je	.L4
	.p2align 4,,10
	.p2align 3
.L3:
	xorl	$1, %eax
	sarl	%edi
	jne	.L3
	ret
	.p2align 4,,10
	.p2align 3
.L4:
	ret
	.cfi_endproc
.LFE11:
	.size	test_one, .-test_one
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"%d\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB12:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$1, %esi
	leaq	.LC0(%rip), %rdi
	xorl	%eax, %eax
	call	printf@PLT
	xorl	%eax, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE12:
	.size	main, .-main
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
