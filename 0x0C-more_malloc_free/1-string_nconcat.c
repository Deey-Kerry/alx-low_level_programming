#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s1: character one
 * @s2: character two
 * @n: input integer
 * Return: concatenated two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, base1 = 0, base2 = 0;
	char *m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[base1] != '\0')
	{
		base1++;
	}
	while (s2[base2] != '\0')
	{
		base2++;
	}
	if (n > base2)
		n = base2;
	m = malloc((base1 + n + 1) * sizeof(char));

	if (m == NULL)
		return (0);

	for (a = 0; a < base1; a++)
	{
		m[a] = s1[a];
	}
	for (; a < (base1 + n); a++)
	{
		m[a] = s2[a - base1];
	}

	m[a] = '\0';

	return (m);
}

