#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of array to be created
 * @c: A char to intialize the array with
 * Return: A pointer to the array, or NULL if it fails or if size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (a < size)
	{
		s[a] = c;
		a++;
	}
	return (s);
}
