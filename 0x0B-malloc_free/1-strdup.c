#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to newly allocated space
 * @str: copy of the string
 * Return: pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	unsigned int m;
	unsigned int size;
	char *twice;

	size = 0;
	m = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[size])
	{
		size++;
	}
	twice = malloc(sizeof(char) * (size + 1));
	if (twice == NULL)
		return (NULL);
	while ((twice[m] = str[m]) != '\0')
		m++;

	return (twice);
}
