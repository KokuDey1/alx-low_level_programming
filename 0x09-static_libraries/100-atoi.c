#include "main.h"

/**
 * _atoi - function that converts a string to an int
 * @s: string to be converted
 *
 * Return: the integer to be converted from the string
 */
int _atoi(char *s)
{
	int a, c, n, len, d, digit;

	a = 0;
	c = 0;
	n = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && d == 0)
	{
		if (s[a] == '-')
			++c;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (c % 2)
				digit = -digit;
			n = n * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}

	if (d == 0)
		return (0);

	return (n);
}
