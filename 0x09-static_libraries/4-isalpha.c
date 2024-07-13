#include "main.h"

/**
 * _isalpha - check main
 * @c: An input character
 * Description: function returns 1 if the character is a
 * letter, lowrcase or uppercase.
 * Return: 1 if c is a letter, 0 if otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
