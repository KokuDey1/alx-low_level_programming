#include "main.h"

/**
 * *_memcpy - creates a copy of memory block
 * @dest: buffer destination
 * @src: memory area to read from
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}

	return (start);
}
