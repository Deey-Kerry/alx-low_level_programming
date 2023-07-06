#include <stdio.h>
#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number input
 * @m: second number input
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xbits = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			xbits++;

		n >>= 1;
		m >>= 1;
	}

	return (xbits);
}
