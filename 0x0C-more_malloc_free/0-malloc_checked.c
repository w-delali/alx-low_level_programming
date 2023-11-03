#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: bytes
 * Return: pointer
 * if malloc fails, status value should be 98.
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
