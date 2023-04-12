#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: input string one
 * @s2: input string two
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *bstr;
	int size1, size2, cover;
	int m, n;

	size1 = size2 = 0;

	if (s1 != NULL)
	{
		m = 0;
		while (s1[m++] != '\0')
			size1++;
	}
	if (s2 != NULL)
	{
		m = 0;
		while (s2[m++] != '\0')
			size2++;
	}

	cover = size1 + size2;
	bstr = (char *)malloc(sizeof(char) * (cover + 1));
	if (bstr == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size1; m++)
	{
		bstr[m] = s1[m];
	}
	for (n = 0; n < size2; n++, m++)
	{
		bstr[m] = s2[n];
	}

	bstr[cover] = '\0';

	return (bstr);
}
