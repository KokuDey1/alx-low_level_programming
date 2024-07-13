#include <stdio.h>
#include "main.h"

/**
 * main - a  function that prints the name of the program
 * @argc: arguments counts
 * @argv: argument value, a strings that come after calling function
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%\n", *argv);

	return (0);
}
