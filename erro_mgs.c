#include "shell.h"

/**
 *
 */

char *erro_mgs(int counter, char *argv)
{
	char after_pipe;
	char cwd[PATH_MAX];
	const char *end_mgs;
	char *erro;
	char *colon = ": ";
	char error_msg[10];

	after_pipe = getcwd(cwd, sizeof(cwd));
	

	// have 1. path 2. counter 3. argv, error message
//	./hsh: 1: qwerty : not found
	error_msg[0] = after_pipe;
	error_msg[1] = colon;
	error_msg[2] = counter;
	error_msg[3] = colon;
	error_msg[4] = argv;
	error_msg[5] = colon;
	error_msg[6] = end_mgs;

	error = write(2, string[], strlen(string[]));

	return (error);
}
