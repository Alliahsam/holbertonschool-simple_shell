#ifndef __SHELL_H__
#define __SHELL_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <unistd.h>

void print_prompt(void);
char *read_cmd(void);
int main(int argc, char **argv);

#endif
