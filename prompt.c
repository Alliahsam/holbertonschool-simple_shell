#include "shell.h"
/**
 * print_prompt - Function print $.
 *
 */
void print_prompt(void)
{
	if (isatty(STDIN_FILENO))
	write(STDOUT_FILENO, "$ ", 2);
}      
