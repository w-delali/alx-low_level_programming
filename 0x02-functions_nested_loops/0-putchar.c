#include "main.h"
/**
 *main - Starting point
 *
 *Return: nothing, return void
 */
int main(void)
{
	char *putchar = "_putchar";

	while (*putchar)
	{
		_putchar(*putchar);
		putchar++;
	}
	_putchar('\n');
	return (0);
}
