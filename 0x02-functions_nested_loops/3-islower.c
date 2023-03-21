#include "main.h"
/**
 * _islower - shows 1 if c is lower case and 0 if not
 * @c: The characters in ASCII code
 *
 * Return: 1 for lowercase. 0 for uppercase.
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
