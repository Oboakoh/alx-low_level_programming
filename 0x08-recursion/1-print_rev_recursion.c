#include "main.h"

/**
 * main - 'Print rev recursion'
 * description: 'print_rev_recursion(char *s)'
 * @s: string
 * return 0
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(-s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
