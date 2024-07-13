#include "main.h"

/**
 * _strcat - merge two strings into a single string
 * @dest: string to merge to
 * @src: string to add
 *
 * Return: a pointer to the outcome string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
