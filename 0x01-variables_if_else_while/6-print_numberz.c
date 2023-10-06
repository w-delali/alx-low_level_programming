#include <stdio.h>

/**
   * main - prints all single base ten digits
   *
   * Return: zero
   */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
