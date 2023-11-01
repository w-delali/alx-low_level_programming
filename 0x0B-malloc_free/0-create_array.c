#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars and initialize it
 * with a specific char
 * @size: array size
 * @c: initializer
 *
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size <= 0)
		return (0);

	s = malloc(sizeof(char) * size);

	if (s == 0)
		return (0);

	for (i = 0; i < size; i++)
		*(s + i) = c;

	*(s + i) = '\0';

	return (s);
}
