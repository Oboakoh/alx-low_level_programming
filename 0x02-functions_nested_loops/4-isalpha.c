#include "main.h"

/**
 * _isapha - function that checks for alphabetic character
 * returns 1 if c is a letter, lowercase or uppercase or else 0
 *
 * return 1 for apha, 0 for ther rest
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
