#include "main.h"

/**
 * print_alphabet - print alphabet lowercase
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}

	_putchar('\n');

}
