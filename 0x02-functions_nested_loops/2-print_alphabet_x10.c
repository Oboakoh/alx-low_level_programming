#include "main.h"

/**
 * 2_print_alphabet_x10 - print the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char m, k;
	for (k = 0; k <= 10; k++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
	}
	_putchar('\n');
}
