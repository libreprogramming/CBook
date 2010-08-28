#Copyright (C) 2010, shiv Shankar Dayal
#This file is part of Learn Correct programming.

#This program is free software. All conditions of GNU GPLv3 or later are
#applicable.

#You should have received a copy of the GNU GPLv3 along with this document. If 
#not, see <http://www.gnu.org/licenses/>.
#Disclaimer: Any damage or loss of data because of programs given in this
#will bear no responsibility to author under any circumstances.

#Author: Shiv Shankar Dayal
#Date: July 6th, 2010
 
	.file	"hello.c"
	.section	.rodata
.LC0:
	.string	"Hello, world!"
	.text
.globl main
	.type	main, @function
main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$16, %esp
	movl	$.LC0, (%esp)
	call	puts
	movl	$0, %eax
	leave
	ret
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.4.3-4ubuntu5) 4.4.3"
	.section	.note.GNU-stack,"",@progbits
