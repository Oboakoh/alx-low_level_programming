#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - Entry point
 * The last digit - print the last digit stored in the variable n'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d is greater than 5\n", n);
	}
	else if (n < 6)
	{
		printf("%d and is less than 6 and not 0\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
