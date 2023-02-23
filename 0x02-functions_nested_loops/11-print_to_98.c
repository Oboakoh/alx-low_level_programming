#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * should be separated by a comma, followed by sapce
 * should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98.
 *
 * return: 98.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf("\n");
	break;
	}
	else
	{
	printf("%d,", n);
	}
	}
	}
}
