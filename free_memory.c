#include "shell.h"
/**
 * free_memory - a function that frees allocated memory
 * @array_of_pokemons: a double pointer to an array of tokens
 * @copy_nipa: a pointer to a copy of input from user
 * @nipa_input: a pointer to a string of user input
 */

void free_memory(char **array_of_pokemons, char *copy_nipa, char *nipa_input)
{
	free(array_of_pokemons);
	free(copy_nipa);
	free(nipa_input);
}
