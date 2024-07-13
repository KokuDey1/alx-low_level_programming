#include "main.h"

/**
 * *_strspn - function that gives the length of a prefix string
 * @s: string to check
 * @accept: string containg the list of characters to match in s
 *
 * Return: the number of bytes in the initial area
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b, d, flag;

	d = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		flag = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				d++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (d);
		}
	}

	return (0);
}

