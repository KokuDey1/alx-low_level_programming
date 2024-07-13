#include "main.h"

/**
 * *_memset - loads memory with a constant byte
 * @s: memory area to be loaded
 * @b: character to copy
 * @n: number of times to copy b
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
