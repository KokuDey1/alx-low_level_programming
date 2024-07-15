#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplictated
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL,
 * or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int a, len;

	a = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[a] = str[a]) != '\0')
		a++;

	return (dup);
}
