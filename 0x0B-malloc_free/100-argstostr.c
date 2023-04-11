#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguement count
 * @av: pointer to one dimensional array
 * Return: concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int l, m;
	int n, base = 0;
	char *d, *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (l = 0; l < ac; l++)
	{
		d = av[l];
		m = 0;

		while (d[m++])
		{
			base++;
		}
		base++;
	}
	str = (char *)malloc(sizeof(char) * (base + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0, m = 0; l < ac && m < base; l++)
	{
		d = av[l];
		n = 0;

		while (d[n])
		{
			str[m] = d[n];
			m++;
			n++;
		}
		str[m++] = '\n';
	}
	str[m] = '\0';
	return (str);
}
