#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using free and malloc
 * @ptr: pointer to the previous memory allocation
 * @old_size: The old size in bytes, of the allocated for ptr
 * @new_size: New size in bytes to newly allocated memory block
 * Return: A pointer to the new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *memb, *p;
	unsigned int a = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	memb = malloc(new_size);
	p = ptr;

	if (old_size > new_size)
		old_size = new_size;

	for (a = 0; a < old_size; a++)
		memb[a] = p[a];
	free(ptr);
	return (memb);
}
