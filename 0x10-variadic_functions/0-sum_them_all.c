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

	for (m = 0; m < n; m++)
	{
		if (va_arg(kd, int))
		{
			sum += va_arg(kd, int);
		}
	}

	va_end(kd);

	return (sum);
}
