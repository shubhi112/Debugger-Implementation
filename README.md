Debugger
A debugger is a computer program used by programmers to test and debug a target program. Debuggers stop or halt the program according to specific conditions. When a program crashes, debuggers show the position of the error in the target program. A very useful trick when debugging complex C programs with GDB is setting breakpoints in the source code. 
Breakpoint is an intentional stopping or pausing place in a program, put in place for debugging purposes. It is also sometimes simply referred to as a pause.
The input can be a simple C program which is to be debugged.
The output will be displayed when a breakpoint is hit. Various tools are used to inspect the state of the program or alter it. Stack trace of each thread may be used to see the chain of function calls that led to the paused instruction. A list of watches allows one to view the values of selected variables and expressions. There may also be tools to show the contents of registers, loaded program modules and other information.
Break keyword can be used to implement the breakpoints. Setting a breakpoint simply involves writing address of PC register into the address where we want to stop. SIGTRAP, the breakpoint trap signal is triggered as soon as the target process is created. For example, break 5.It will set breakpoint at line number 5.
Print and Display can be used to display values when execution halts at a breakpoint. 
run is used to run the program in gdb
n is used to execute next line
c is used to continue execution.
