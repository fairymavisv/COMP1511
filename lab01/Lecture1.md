# Lecture1
Resource Link:
https://cgi.cse.unsw.edu.au/~cs1511/22T3/

Assessment:
labs 15% + Ass0 5% + Ass1 15% + Ass2 25% + Final 40% 

1. What is ... ?
	What is a computer?
	- The ultimate tool in its ability to be reconfigured for different purposes.
	- Key elements = a processor to execute commands + memory to store information
	
	What is programming?
	-  Provide a computer with specific instructions to sovle various problems
	
	An operating system is the interface between the user and computer hardware
	What is an operating system?
	- Execute user programs and make solving problems easier
	- Make the computer system conventient to use
	
	Terminal: a graphical application that reads / displays information
	
	Shell: a program that executes commands, and has its own syntax.
	
	Prompt: The prompt is controlled by the shell, and is the line of text which displays some information.

2. Command Line:
	- cp source destination: copy a file from the source to the destination
	- rm source drstination: move a file from the source to the destination
	- -r : the -r tag can be added to cp or rm commands to recursively go through a directory and perform the command on all the files
	```
		cp -r COMP1511 COMP1511_backup
	```
3.  Example C code:
```
// Line 1-3 are for header
// /* */ everthing between them will be comments
// THe computer will ignore comments

#inclue <stdio.h> // Line 5 is a special tag for compiler

int main(void){
	printf("Hey!\n");
	return 0;
} // The "main" function
```

	- int is the output return type and stands for integer
	- main is the name of the function
	- (void) means no input
	- Between { and } are a set of progrm instructions
	- Return 0 is signifying a correct outcome of the  program

4. Editing and compilation:
	open the file to edit
	```
	code hey.c
	```
	compile it
	```
	dcc hey.c -o hey
	```
	-o tells compiler to write out a file called "hey" that we can then run
	
	run it
	```
	./hey
	```