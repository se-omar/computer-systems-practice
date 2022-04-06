# Chapter 1 notes:

-   a program is a series of bits, each bit is 1 or 0. these bits are organized in 8-bit chunks called bytes.
-   each byte contains some text character, a letter or a number is 1 byte.
-   letters and numbers are represented using ascii representation.
-   new lines are indicated by \n which is represented in ascii by 10.
-   an example hello.c program goes through the compilation process to produce machine language.
-   the compilation process consists of many components:

1. pre-processor: it takes the lines that start with # and includes their code in the to be compiled file, for example in this line (#include <stdio.h>), the pre processor takes the code in the stdio.h file and places it in the original file.
   the preprocessor generates a hello.i file
2. compiler: the complier takes the hello.i file and converts it's contents into assembly language.
   the complier generates a hello.s file
3. assembler: the assembler takes hello.s and converts it into machine language 1s and 0s then places it in hello.o file
4. linker: the linker is responsible of getting the code of libraries and functions called in the program, for example if u use the printf function, the linker gets the code of the function and merges it with the file.
   the linker produces hello file (no extension) that is ready to be run.

-   to run the hello program we run it from the shell command line prompt, typing ./hello we see hello, world.
-   the shell is a command line interpreter, if the first word of the command is not a built-in shell command, shell assumes that it is and executable file and tries to execute it, in this case it runs the hello program, waits for it to terminate, then prompts for the next command.
-   hardware components of the system:

1. buses:
