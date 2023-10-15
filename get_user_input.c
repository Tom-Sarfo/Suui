#include "shell.h"
/**
 * gye_input - take input from user
 * Return: nothing
 */

void gye_input(void)
{
	char *nipa_input = NULL;
	size_t input_size = 0;
	ssize_t buff_len;

	buff_len = getline(&nipa_input, &input_size, stdin);

	if (buff_len == -1)
	{
		she_prints("\n");
		exit(EXIT_FAILURE);
	}
	if (strcmp(nipa_input, "env\n") == 0)
	{
		print_environ();
	}
	if (buff_len > 0 && nipa_input[buff_len - 1] == '\n')
	{
		nipa_input[buff_len - 1] = '\0';
	}
	exit_shell(nipa_input);
	yenza_command(nipa_input);
}
