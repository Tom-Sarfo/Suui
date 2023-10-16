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

	after_pipe = getcwd(cwd, sizeof(cwd));
	
