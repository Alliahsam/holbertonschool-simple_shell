#include "shell.h"
/**
 * print_prompt - Function that prints $.
 *
 */
void print_prompt(void)
{
	if (isatty(STDIN_FILENO))
	write(STDOUT_FILENO, "$ ", 2);
}      
