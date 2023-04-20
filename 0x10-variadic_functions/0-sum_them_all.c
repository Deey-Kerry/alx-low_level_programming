#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: input integer
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list kd;
	unsigned int m;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(kd, n);

	m = 0;
	do {
		sum += va_arg(kd, int);
		m++;
	} while (m < n);


	va_end(kd);

	return (sum);
}
