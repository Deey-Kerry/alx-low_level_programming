#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - a function that prints anything
 * @char *: to check if string is NULL
 * @format: list of types of arguments passed to the function
 * Return: anything
 */
void print_all(const char * const format, ...)
{
	char *str;
	unsigned int p = 0, q = 0, r = 0;
	va_list vari;
	const char k_fomat[] = "cifs";

	va_start(vari, format);
	while (format && format[p])
	{
		q = 0;
		while (k_fomat[q])
		{
			if (format[p] == k_fomat[q] && r)
			{
				printf(", ");
				break;
			}
			q++;
		}
		switch (format[p])
		{
			case 'c':
				printf("%c", va_arg(vari, int)), r = 1;
				break;
			case 'i':
				printf("%d", va_arg(vari, int)), r = 1;
				break;
			case 'f':
				printf("%f", va_arg(vari, double)), r = 1;
				break;
			case 's':
				str = va_arg(vari, char *), r = 1;
				if (!str)
					printf("(nil)");

				printf("%s", str);
				break;
		} p++;
	}
	printf("\n"), va_end(vari);
}
