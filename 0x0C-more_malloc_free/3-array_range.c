#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum range of stored values
 * @max: maximum range of values stored
 *
 * Return: A pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int k, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	p = malloc(sizeof(int) * size);

	if (p == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
		p[k] = min++;

	return (p);
}
