#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: First string to append to
 * @s2: second string to concatente from
 * @n: The number of bytes froms2 to concatenate to s1
 *
 * Return: A pointer to the newly allocated space in memory containing s1
 * followed by the first n bytes of s2, and null terminated.
 * If the function fails, it returns NULL.
 * if n is greater or equal to the length of s2, the entire string s2 is used.
 * if NULL is passed, treat it as an empty string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *k;
	unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		k = malloc(sizeof(char) * (len1 + n + 1));
	else
		k = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!k)
		return (NULL);

	while (a < len1)
	{
		k[a] = s1[a];
		a++;
	}

	while (n < len2 && a < (len1 + n))
		k[a++] = s2[b++];

	while (n >= len2 && a < (len1 + len2))
		k[a++] = s2[b++];

	k[a] = '\0';

	return (k);
}
