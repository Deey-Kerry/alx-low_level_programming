#include <stdio.h>
#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number input
 * @index:  is the position, starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int kd;

	if (index > 63)
		return (-1);

	kd = (n >> index) & 1;

	return (kd);
}
