#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Concatenates two strings
 * @s1: First string
 * @s2: second string
 *
 * Return: Pointer to new string created (success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);

	a = 0;
	b = 0;

	if (s1)
	{
		while (a < len1)
		{
			s3[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (len1 + len2))
		{
			s3[a] = s2[b];
			a++;
			b++;
		}
	}
	s3[a] = '\0';

	return (s3);
}
