# File Descriptors: Some theory and examples
I present my little abstract about the "C-file I / O" project of the FD chapter at ALX School.

##### What are File Descriptors?
A number that uniquely identifies an open file in a operative system. It describe a data resource and how that resource may be accessed. 
##### How to [create], [open], [close], [read] and [write] files?
Synopsis in `man 2 open`...
##### What are the 3 standard file descriptors, what are their purpose and what are their POSIX names?
| Integer Value | Name | `<unistd.h>` Symbolic Constant *(posix)* | `<stdio.h>` File Stream
| :------- | :------: | :-----: | -----:
| 0 | Standard Input | STDIN_FILENO | stdin 
| 1 | Standard Output | STDOUT_FILENO | stdout
| 2 | Standard Error | STDERR_FILENO | stderr

##### How to use the I/O system calls open, close, read and write? 
I recommend watch this video:
* C Programming in Linux Tutorial #024
open() read() write() Functions


##### What are and how to use the flags `O_RDONLY`, `O_WRONLY`, `O_RDWR`?
The file status flags and file access modes of the open file description will be set according to the value of oflag. Values for oflag are constructed by a bitwise-inclusive-OR of flags from the following list, defined in `<fcntl.h>`. Applications must specify exactly one of the first three values (file access modes) below in the value of oflag:

```c
O_RDONLY    00 /*Open for reading only.*/
O_WRONLY    01 /*Open for writing only.*/
O_RDWR      02 /*Open for reading and writing.*/
 
 /*Sintax:*/
 int open(const char *pathname, int flags); 
 
 /*Example:*/
 int file_d;
 file_d = open(av[1], O_RDONLY);
```
##### What are file permissions, and how to set them when creating a file with the open system call?
You can learn about Linux [permissions]. We remembered one of our first projects: **0x01. Shell, permissions**. I leave you the [project] in case you want to go see it.
Basically is : 
* r = 4
* w = 2
* x = 1

```
int open(const char *pathname, int flags, mode_t mode);
```
* The following symbolic constants are provided for mode:

              S_IRWXU  00700 user (file owner) has read, write and execute permission
              S_IRUSR  00400 user has read permission
              S_IWUSR  00200 user has write permission
              S_IXUSR  00100 user has execute permission
              S_IRWXG  00070 group has read, write, and execute permission
              S_IRGRP  00040 group has read permission
              S_IWGRP  00020 group has write permission
              S_IXGRP  00010 group has execute permission
              S_IRWXO  00007 others have read, write, and execute permission
              S_IROTH  00004 others have read permission
              S_IWOTH  00002 others have write permission
              S_IXOTH  00001 others have execute permission
    According to POSIX, the effect when other bits are set in mode is unspecified.  On Linux, the following bits are also honored in mode:
    
              S_ISUID  0004000 set-user-ID bit
              S_ISGID  0002000 set-group-ID bit (see inode(7)).
              S_ISVTX  0001000 sticky bit (see inode(7)).

##### What is a system call?
A system call is a way for programs to interact with the operating system. Definition [here].
##### What is the difference between a function and a system callr?
  - System call is a call to a subroutine (kernel) in the operative system
  - Function call, is a call to a subroutine within a program
 > Open() its a function, system call, and a function provided by the kernel
