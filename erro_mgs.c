#include "shell.h"

/**
 *
 */

char *erro_mgs(int counter, char *argv)
{
	char after_pipe;
	char cwd[PATH_MAX];
	char end_mgs;
	char *error;
	char colon = ": ";
	char error_msg[7];
	int i;

	after_pipe = getcwd(cwd, sizeof(cwd));
	end_mgs = "not found";
	
	error_msg[0] = after_pipe;
	error_msg[1] = colon;
	error_msg[2] = counter;
	error_msg[3] = colon;
	error_msg[4] = argv;
	error_msg[5] = colon;
	error_msg[6] = end_mgs;

	for (i = 0; i < 8; i++)
	{
		error = write(2, error_msg[i], strlen(error_msg[i]));
	}

	return (error);
}

int main(void)
{
	int counter = 1;
	char *argv = "ls";
	char *msg;

	while (counter < 1000)
	{
		if (execve(argv) == -1)
		{
			msg = erro_mgs(counter, argv);
		}
		counter++;
	}
	printf("%s\n", msg);
	return (0);
}

