#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print the lwoercase alphabet in reverse'
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
