#include "shell.h"
/**
 * handle_command - create env path and execute command
 * @argv: double pointer to argument list of users input
 * Return: nothing;
 */
void handle_command(char **argv)
{
	char *command = NULL, *path = getenv("PATH"), *path_token, *full_path;
	char *search = strchr(argv[0], '/');
	char *copy_path = malloc(strlen(path) + 1);

	str_copy(copy_path, path);
	if (search != NULL)
	{
		command = argv[0];
	}
	else
	{
		path_token = strtok(copy_path, ":");
		if (path_token == NULL)
		{
			perror("you entered a wrong path");
			exit(EXIT_FAILURE);
		}
		while (path_token != NULL)
		{
			full_path = malloc(strlen(path_token) + 1 + strlen(argv[0]));
			check_malloc(&full_path);
			str_copy(full_path, path_token);
			str_concat(full_path, "/");
			str_concat(full_path, argv[0]);

			if (access(full_path, X_OK) == 0)
			{
				command = full_path;
				break;
			}
			path_token = strtok(NULL, ":");
		}
	}
	if (execve(command, argv, NULL) == -1)
	{
		perror("error executing command");
		exit(EXIT_FAILURE);
	}
	free(copy_path);
	free(full_path);
}

