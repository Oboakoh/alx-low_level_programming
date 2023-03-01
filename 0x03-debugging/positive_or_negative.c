#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 * Description: 'the program will check if a number is positive or negative'
 * Return: Always 0 (Success)
 */

int main(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/*your code goes there */
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
		printf("%d is zero\n", i);
	return (0);
}
