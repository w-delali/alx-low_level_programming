#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase.
 * @s: string to make uppercase.
 *
 * Return: string in uppercase
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] -= 32;
		}
		i++;
	}

	return (s);
}
