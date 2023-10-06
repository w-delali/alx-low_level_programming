#include <stdio.h>

/**
   * main - prints alphabet in reverse
   *
   * Return: 0
   */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
		putchar(alp);
	putchar('\n');
	return (0);
}
