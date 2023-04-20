#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	char *chr;
	unsigned int d;

	va_start(nums, n);

	d = 0;
	while (d < n)
	{
		chr = va_arg(nums, char*);
		do {
			if (chr == NULL)
				printf("(nil)");
			else
				printf("%s", chr);

			if (d != (n - 1) && separator != NULL)
				printf("%s", separator);

			d++;
		} while (0);
	}
	printf("\n");

	va_end(nums);
}
