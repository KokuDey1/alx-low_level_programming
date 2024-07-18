#include "main.h"
#include <stdlib.h>

/**
 * _calloc -Allocates memory for an array using malloc, ets the memory to zero
 * @nmemb: number of memory spaces in the array
 * @size: the size of elements in bytes
 * Return: a pointer to allocated space, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (; k < nmemb * size; k++)
		*(arr + k) = 0;

	return (arr);
}
