#include "main.h"

/**
 * leet - encodes string into 1337
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char array_replacer[] = {'4', '3', '1', '0', '7'};
	char array_upper[] = {'A', 'E', 'L', 'O', 'T'};
	char array_lower[] = {'a', 'e', 'l', 'o', 't'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == array_lower[j] || s[i] == array_upper[j])
				s[i] = array_replacer[j];
		}
		i++;
	}

	return (s);
}
