#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting point
 *
 * @argc: counts the number of parameters that goes into main
 * @argv: pointer of array of pointers
 * containing strings in main param
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
