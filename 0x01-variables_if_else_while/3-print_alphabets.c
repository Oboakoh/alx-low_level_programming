#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0.
 */
int main(void)
{
	int n = 65;
	int s = 97;

	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	while (s <= 122)
	{
		putchar(s);
		s++;
	}
	putchar('\n');
	return (0);
}
