#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * count_words - counts words in a string
 * @s: string input
 * Return: words counted
 */
int count_words(char *s)
{
	int a = 0, b = 0, flag = 0;

	while (s[a] != '\0')
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
		a++;
	}

	return (b);
}
/**
 * strtow - divide string
 * @str: string given
 * Return: divided string
 */
char **strtow(char *str)
{
	char *tmp, **grid;
	int x = 0, y = 0, base = 0, letters, a = 0, begin, stop;

	do {
		base++;
	} while (*(str + base));
	letters = count_words(str);
	if (letters == 0)
		return (NULL);
	grid = malloc(sizeof(char *) * (letters + 1));
	if (grid == NULL)
		return (NULL);
	while (x <= base)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (a)
			{
				stop = x;
				tmp = malloc(sizeof(char) * (a + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < stop)
					*tmp++ = str[begin++];
				*tmp = '\0';
				grid[y] = tmp - a;
				y++;
				a = 0;
			}
		}
		else if (a++ == 0)
			begin = x;
		x++;
	}
	grid[y] = NULL;
	return (grid);
}
