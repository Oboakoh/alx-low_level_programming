#include "main.h"

/**
 * -islower - check for lowercaser character , 
 *  return 1 if c is lowercase otherwise return 0
 *
 *  Return 1 for lowercase characters, 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
