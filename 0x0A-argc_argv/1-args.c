#include <stdio.h>
#include <stdlib.h>

/**
 * main - Starting point
 *
 * @argc: counts the number of parameters that goes into main
 * @argv: pointer of array of pointers
 * containing strings entering main params
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%i\n", argc - 1);
	return (0);
}
