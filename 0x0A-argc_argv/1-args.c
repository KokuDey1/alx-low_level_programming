#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the number of arguments passed to the program
 * @argc: The number of arguments
 * @argv: argument values
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return(0);
}
