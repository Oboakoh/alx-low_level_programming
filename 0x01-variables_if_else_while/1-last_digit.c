#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Main - Entry point
 * Description: 'print the last digit stored in the variable n'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit %d is %d and is 0\n", n, ld);
	}
	else
		printf("Last digit %d is %d and less than 6 not 0\n", n, ld);
	return (0);
}
