# My Shell
***
## Description

What is the shell? 
A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems The first Shell Unix sh was written by Ken Thompson working at Bell Labs and called Thompson shell Version 1.

My shell is a small program written in C that allows you to execute commands in a terminal. It was developed as part of a Holberton project to deepen my knowledge of systems programming.

### C language standard functions and system calls utilized

`exit`,`printf`,`print_prompt`, 
`free`,`read_cmd`, `getline`,`malloc`,
`strcmp`, `realloc`, `fprintf`, `strerror`, `strcpy`, 


## Brief Synopsis

All files in this repository are designed to compile with GNU compiler
collection v. '`gcc 4.8.4`' in the linux environment from '`Ubuntu 14.04.5
LTS`'.  When compiled, the executable file replicates a 'shell' or command line
interpreter, which is a user interface used for access to an operating system's
services.  

## Usage

### compile

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```


### executing the program

**interactive mode**: `./hsh`


## Authors

Hanane ARRAHMANI - https://github.com/  
Samira OULED - https://github.com/
