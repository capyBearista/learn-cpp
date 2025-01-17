Lots of programs running at the same time can deplete real memory.

**Virtual memory** was created to trick programs into thinking they are the only program running on the OS, and that all memory resources belong to it.

Each program abstracted into a process. Each process has access to memory range 0 to (2^N)-1, where N = 32 for 32 bit systems and 64 for 64 bit systems. Essentially the entirety of your physical RAM.

**C++ program --(compiler)--> binary .exe**. The .exe is a representation of how things will be laid out in memory.

When the program is run, it goes through the **Memory Management Unit (MMU)** section of the CPU. The MMU transfers between the memory map of each process and the real memory layout of RAM.
- Note: Entire program is NOT loaded in real memory by CPU/MMU, only parts that are about to be executed are. Making effective use of real memory is important as it is a valuable and lacking resource.

When multiple processes are running simultaneously, the MMU will assign sections in the real RAM for the program to operate within.
- Remember that the program *thinks* it has access to the entire range of memory.

The memory map is a *standard format defined by each OS*. All programs written for the OS must confirm to it. 

Memory maps
-
* range from 0 to (2^N)-1
* composed of several sections:
    * system
    * stack - stores local variables, function calls...
    * heap - additional memory that can be queried for at run time
    * data
    * text - loads the actual binary for the program for the CPU to execute