#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate arguments of a program
 * @ac: argument count
 * @av: arguments passed
 *
 * Return: pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int l, lt, i, j, k;

	if (ac == 0 || av == NULL)
		return (0);
	l = 0, k = 0;
	for (i = 0; i < ac; i++)
	{
		lt = 0;
		while (av[i][lt])
			lt++;
		l += lt + 1;
	}
	s = malloc((l + 1) * sizeof(char));

	if (s == 0)
		return (0);

	for (j = 0; j < ac; j++)
	{
		lt = 0;
		while (av[j][lt])
		{
			*(s + k) = av[j][lt];
			k++;
			lt++;
		}
		*(s + k) = '\n';
		k++;
	}
	*(s + k) = '\0';

	return (s);
}
