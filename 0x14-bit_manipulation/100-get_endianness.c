#include <stdio.h>
#include "main.h"
/**
 * get_endianness - a function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 **/
int get_endianness(void)
{
	int count = 1;
	char *q = (char *)&count;

	if (*q == 1)
	{
		return (1);
	}

	return (0);
}
