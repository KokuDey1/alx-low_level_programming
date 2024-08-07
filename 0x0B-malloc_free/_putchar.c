#include <unistd.h>

/**
 * _putchar - writes the character to c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is appropriately.
 */
int _putcahr(char c)
{
	return (write(1, &c, 1));
}
