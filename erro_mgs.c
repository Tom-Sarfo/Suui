#include "shell.h"

/**
 *
 */

char *erro_mgs(int counter, argv)
{
	char after_pipe;
	char cwd[PATH_MAX];
	const char *end_mgs;
	char *erro;
	char *colon = ": ";
	char error_msg[10];;

	after_pipe = getcwd(cwd, sizeof(cwd));

	// have 1. path 2. counter 3. argv, error message
//	./hsh: 1: qwerty : not found
	write(2, after_pipe, strlen(after_pipe));
	write(2, colon, strlen(colon));
	write(2, counter, strlen(counter));
	write(2, colon, strlen(colon));
	write(2, argv, strlen(argv));
	write(2, colon, strlen(colon));
	write(2, error_msg, strlen(error_msg);
        strings[];

	string[0] = after_pipe;
	string[1] = colon;
	------- = -----;

	error = write(2, string[], strlen(string[]));

	return (error)
