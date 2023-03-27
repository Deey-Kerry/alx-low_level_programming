#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int k;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;
	for (k = length; k > 0; k--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
