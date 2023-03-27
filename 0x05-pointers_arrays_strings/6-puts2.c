#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: character of a string
 */
void puts2(char *str)
{
	int length = 0;
	int t = 0;
	char *y = str;
	int k;

	while (*y != '\0')
	{
		y++;
		length++;
	}
	t = length - 1;
	for (k = 0 ; k <= t ; k++)
	{
		if (k % 2 == 0)
	{
		_putchar(str[k]);
	}
	}
	_putchar('\n');
}
