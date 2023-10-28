#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point of program
 *
 * @argc: counts the number of parameters that go into main
 * @argv: pointer of array of pointers
 * containing strings entering main
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
