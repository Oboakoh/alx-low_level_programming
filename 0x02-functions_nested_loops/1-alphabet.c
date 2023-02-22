#include "main.h"

/**
 * main - prints "functions that prints the alphabett, in lowercase"
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
