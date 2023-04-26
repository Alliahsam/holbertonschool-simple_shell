# holbertonschool-simple_shell
=======
# My Shell
***
## Description

What is the shell? 
A Unix shell is a command-line interpreter or shell that provides a command line user interface for Unix-like operating systems The first Shell Unix sh was written by Ken Thompson working at Bell Labs and called Thompson shell Version 1.

My shell is a small program written in C that allows you to execute commands in a terminal. It was developed as part of a Holberton project to deepen my knowledge of systems programming.

### C language standard functions and system calls utilized

`access`, `chdir`, `close`, `closedir`, `execve`, `exit`, `fork`,
`free`, `fstat`, `getcwd`, `getline`, `kill`, `lstat`, `malloc`,
`open`, `opendir`, `perror`, `read`, `readdir`, `signal`, `stat`,
`strtok`, `wait`, `waitpid`, `wait3`, `wait4`, `write`, `_exit`

## Brief Synopsis

All files in this repository are designed to compile with GNU compiler
collection v. '`gcc 4.8.4`' in the linux environment from '`Ubuntu 14.04.5
LTS`'.  When compiled, the executable file replicates a 'shell' or command line
interpreter, which is a user interface used for access to an operating system's
services.  This shell has a set of custom built-in commands, and also integrates
with other commands located in the system's PATH.  Output and functionality from
commands is designed to replicate output from the shell `sh` (dash) and some
bash commands.

## Usage

### compile

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

**Compile with Make**: `make all`

### executing the program

**interactive mode**: `$ ./hsh`

**non-interactive mode**: `$ echo "ls -la" | ./hsh`


## Authors

Hanane ARRAHMANI - https://github.com/  
Samira OULED - https://github.com/
>>>>>>> 9c9ecadbfd22f2f48ed4ccf1863823f74113b913
