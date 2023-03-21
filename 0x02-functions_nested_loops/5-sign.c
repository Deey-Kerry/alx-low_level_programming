#include "main.h"
/**
 * print_sign - prints the sign of the given number
 *
 * @n: this is the input
 *
 * Return: 1 is greater than zero. - is less 1. 0 is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');

}
