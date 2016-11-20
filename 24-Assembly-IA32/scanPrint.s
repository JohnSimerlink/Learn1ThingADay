.file "scanPrint.s" #optional directive
.section .rodata #required directives for rodata
.LC0:
  .string "Please enter an integer on the next line, followed by enter:\n".LC1:
  .string "%i"
.LC2:
  .string "The value of x after adding 5 is: %i\n"

.data #required for file scope data: read-write program data
  #of static storage class
x:
  .long 0

.globl #required directive for every function
  .type main, @function #required directive

.text #required directive
main:
  pushl %ebp
  movl %esp, %ebp
  pushl $.LCO #push address of string "Please enter...:\n"
  call printf
  addl $4, %esp #"Remove" the 
