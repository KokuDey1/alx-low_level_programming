#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * into a single string.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the concatenated string,
 * or NULL if ac == 0, av == NULL, or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	char *arg;
	int len = 0, a = 0, b, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
		len++;
	}

	len++;
	arg = malloc(len * sizeof(char));
	if (arg == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			arg[k] = av[a][b];
			k++;
		}
		arg[k] = '\n';
		k++;
	}

	arg[k] = '\0';
	return (arg);
}
