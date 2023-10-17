nclude "main.h"

/**
 * rev_string - reverse a string.
 *
 * @s: the string to be reversed.
 */

void rev_string(char *s)
{
	int length, i, j;
	char v1, v2;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	i = 0;
	j = length - 1;

	while (j > i)
	{
		v1 = s[i];
		v2 = s[j];
		s[i] = v2;
		s[j] = v1;
		j--;
		i++;
	}
}
