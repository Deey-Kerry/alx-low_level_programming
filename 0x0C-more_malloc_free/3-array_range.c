#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - a function that creates an array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *mnx;
	int a = 0, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	mnx = malloc(sizeof(int) * len);

	if (mnx == NULL)
		return (NULL);
	do {
		mnx[a] = min++;
		a++;
	} while (min <= max);

	return (mnx);
}

