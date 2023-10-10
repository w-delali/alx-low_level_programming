#include <stdio.h>

/**
 * main - prints the sum of even-valued Fibonacci sequence terms not exceeding 4000000.
 *
 *
 * Return: 0
 */
int main(void)
{
	unsigned long fib1 = 0;
	unsigned long fib2 = 1;
	unsigned long fibSum;
	float tot_sum;

	while (1)
	{
		fibSum = fib1 + fib2;
		if (fibSum > 4000000)
			break;

		if ((fibSum % 2) == 0)
			tot_sum += fibSum;

		fib1 = fib2;
		fib2 = fibSum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
