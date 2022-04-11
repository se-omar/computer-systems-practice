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

1. buses: buses carry bytes of information back and forth between the components of the system, they carry specific sized bytes called words, a word can be 4 bytes(32 bits) or 8 bites(64 bits) long.

2. I/O devices: they are the connection between the system and outside systems, for example the keyboard and mouse are input devices that input bytes to the system, monitor is an output device that displays bytes.

3. main memory: it's a device that holds the required instructions and data needed for the processor to run the program.

4. processor: it is the device that executes the instructions stored in the main memory, it has a word size storage device called the Program Counter (PC), the PC points to the next instruction to be executed by the processor, the processor finishes the instruction and updates the PC to point to the next instruction. The processor has few instructions:

-   the system spends alot of time moving things around from disk to memory and from memory to registers then back to memory, and because larger storage are slower but also cheaper, and smaller storage are faster but costlier, we want to store huge amounts of data but we also want the data to be accessed and processed quickly, so caches were made.
-   caches are put between fast memory and slow memory to access frequently used data quickly.
-   the processor has 3 caches, L1, L2 and L3. Each one caches data from the one after it and each one is faster and smaller than the one after it.
-   then there is the ram which caches from disk.
-   [memory heirarchy image](./images/memory-heirarchy.png)

-   a cpu can run multiple programs at a time using something called context switching, each process or program has context and data related to it, when the cpu is running one process and want to switch to another process, it saves the context of the first process in memory, then switches contexts to the second process, when it wants to switch back, it saves the context of the second process and loads the context of the first process back from memory and continues execution. [context switching image](./images/context-switching.png)

-   this context switching is carried by the Kernel, the kernel is the part of the OS that is responsible for managing the hardware with the software.
-   when an application requires something from the hardware, like reading or writing to a file, it performs a "system call", a system call transfers control from the application to the kernel, then the kernel does the operation its told to do, and returns control to the application.
-   threads: processes can have more than one control flow, it can have multiple control flows seperated in threads, threads share the same context of the process.
