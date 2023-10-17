#include "main.h"
/**
 * swap_int - swaps the values of 2 integers
 * @a: first int var
 * @b: second int var
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}


