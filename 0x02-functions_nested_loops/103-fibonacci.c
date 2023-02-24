#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fab1 = 0, fab2 = 1, fabsum;
	float tot_sum;

	while (1)
	{
		fabsum = fib1 + fib2;
		if (fabsum > 4000000)
			break;

		if ((fabsum % 2) == 0)
			tot_sum += fabsum;

		fab1 = fab2;
		fab2 = fabsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
