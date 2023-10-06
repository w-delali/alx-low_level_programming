#include <stdio.h>

/**
   * main - print alphabet in upper and lowercase
   *
   * Return: zero
   */
int main(void)
{
	char alp;
	char ALP;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (ALP = 'A'; ALP <= 'Z'; ALP++)
		putchar(ALP);
	putchar('\n');
	return (0);
}
