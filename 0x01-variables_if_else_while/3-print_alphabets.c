#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0.
 */
int main(void)
{
	int n = 97;
	int s = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (s <= 90)
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
