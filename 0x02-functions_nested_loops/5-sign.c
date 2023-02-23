#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 * Returns 1 and prints + if n is greater than zero
 * Return 0 and prints 0 if n is zero
 * Return -1 and print - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(44);
		return (-1);
	}
	else
	{
		_putchar(0);
		return (0);
	}
	_putchar('\n');
}
