#include <stdio.h>

/**
   * main - print alphabet in lowercase
   *
   *Return: zero
   */
int main(void)
{
	char alp = 'a';

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
