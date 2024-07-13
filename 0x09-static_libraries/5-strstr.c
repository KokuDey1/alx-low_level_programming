#include "main.h"
#include <stdio.h>

/**
 * *_strstr - functions that finds a substring
 * @haystack: string to look in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of the found substring
 * on NULL if the substring is not located
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
				break;
		}
		if (!needle[b])
			return (&haystack[a]);
	}
	return (NULL);
}
