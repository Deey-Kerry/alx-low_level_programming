#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list stn;
	unsigned int ptrn = 0;

	va_start(stn, n);

	ptrn = 0;
	while (ptrn < n)
	{
		printf("%d", va_arg(stn, int));

		if (ptrn != n - 1 && separator != NULL)
			printf("%s", separator);

		ptrn++;
	}
	printf("\n");

	va_end(stn);
}
