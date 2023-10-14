#include "shell.h"

/**
 * print_environ - a function that prints the current environment
 */

void print_environ(void)
{
	char **env = environ;
	size_t str_len;

	while (*env != NULL)
	{
		str_len = strlen(*env);
		write(1, *env, str_len);
		write(1, "\n", 1);
		env++;
	}
}

