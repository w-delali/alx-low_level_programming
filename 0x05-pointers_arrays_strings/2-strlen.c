#include "main.h"

/**
 * _strlen - counts the length of a string.
 *
 * @s: the string to check it's length.
 *  Return: lenght
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
