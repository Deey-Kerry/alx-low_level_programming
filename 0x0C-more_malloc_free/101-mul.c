#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_digit - checks for a non-digit char in string
 * @s: string
 * Return: 0 or 1
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - progran that returns the length of a string
 * @s: string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * errors - show errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - a program that multiplies two positive numbers
 * @argc: number of arguements
 * @argv: one dimensional array of arguements
 * Return: multiplied numbers
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int size1, size2, size, a, take, base1, base2, *multiply, b = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	size = size1 + size2 + 1;
	multiply = malloc(sizeof(int) * size);
	if (!multiply)
		return (1);
	for (a = 0; a <= size1 + size2; a++)
		multiply[a] = 0;
	for (size1 = size1 - 1; size1 >= 0; size1--)
	{
		base1 = s1[size1] - '0';
		take = 0;
		for (size2 = _strlen(s2) - 1; size2 >= 0; size2--)
		{
			base2 = s2[size2] - '0';
			take += multiply[size1 + size2 + 1] + (base1 * base2);
			multiply[size1 + size2 + 1] = take % 10;
			take /= 10;
		}
		if (take > 0)
			multiply[size1 + size2 + 1] += take;
	}
	for (a = 0; a < size - 1; a++)
	{
		if (multiply[a])
			b = 1;
		if (b)
			_putchar(multiply[a] + '0');
	}
	if(!b)
		_putchar('0');

	_putchar('\n');
	free(multiply);
	return (0);
}
