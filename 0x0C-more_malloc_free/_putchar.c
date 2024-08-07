#include <unistd.h>

/**
 * _putchar - writes the character c to std
 * @c: Character to print
 *
 * Return: On Success 1.
 * Error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
