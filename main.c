#include "shell.h"

/**
 * main - main - start the shell
 * exit EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

	char *cmd;
	
	print_prompt();                                                                                                                                                                                                                   
	cmd = read_cmd();

	do
	{


		if(!cmd)
		{
			exit(EXIT_SUCCESS);
		}

		if(cmd[0] == '\0' || strcmp(cmd, "\n") == 0)
		{
			free(cmd);
			continue;
		}

		if(strcmp(cmd, "exit\n") == 0)
		{
			free(cmd);
			break;
		}

		printf("%s\n", cmd);

		free(cmd);

	}

	while(1);

	exit(EXIT_SUCCESS);
}

/**
 * read_cmd: function that read command
 */

char *read_cmd(void)
{
    char *line = NULL;
    size_t bufsize = 0;
    ssize_t buflen;
    char *ptr = NULL;
    size_t ptrlen = 0;

    while ((buflen = getline(&line, &bufsize, stdin)) != -1)
    {
        if (!ptr)
        {
            ptr = malloc(buflen + 1);
        }
        else
        {
            char *ptr2 = realloc(ptr, ptrlen + buflen + 1);

            if (ptr2)
            {
                ptr = ptr2;
            }
            else
            {
                free(ptr);
                ptr = NULL;
            }
        }

        if (!ptr)
        {
            fprintf(stderr, "error: failed to allocate buffer: %s\n", strerror(errno));
            free(line);
            return NULL;
        }

        strcpy(ptr + ptrlen, line);

        if (line[buflen - 1] == '\n')
        {
            if (buflen == 1 || line[buflen - 2] != '\\')
            {
                free(line);
                return ptr;
            }

            ptr[ptrlen + buflen - 2] = '\0';
            buflen -= 2;
        }

        ptrlen += buflen;
    }

    free(line);
    return ptr;
}
