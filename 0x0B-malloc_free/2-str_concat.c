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
	unsigned int size1 = 0, size2 = 0;
	unsigned int m = 0, n = 0;
	unsigned int area;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = n = 0;
	while (s1[size1] != '\0')
		size1++;
	while (s1[size2] != '\0')
		size2++;

	area = size1 + size2;

	bstr = malloc((sizeof(char) * area) + 1);
	if (bstr == NULL)
		return (NULL);
	while (m < size1)
	{
		bstr[m] = s1[m];
		m++;
	}
	while (n < size2)
	{
		bstr[m] = s2[n];
		m++;
		n++;
	}
	bstr[m] = '\0';

	return (bstr);
}
