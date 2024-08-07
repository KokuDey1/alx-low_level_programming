#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a sets of bytes.
 * @s: an input string
 * @accept: string containing the bytes to search for
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
