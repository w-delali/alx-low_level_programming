#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * but for multiples of 3 print Fizz
 * and with multiples of 5 print Buzz
 * and if it multiple of both 3 & 5 print FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		} else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}

