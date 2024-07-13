#include "main.h"
#include <stdio.h>

/**
 * _abs - check main
 * @n: An integer input
 * Description: this function returns absolute value of a number
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}

