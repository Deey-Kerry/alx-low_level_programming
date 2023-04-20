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
	char *chr, *kdn = "";
	int z = 0;

	va_list vari;

	va_start(vari, format);

	if (format)
	{
		z = 0;
		while (format[z])
		{
			switch (format[z])
			{
				case 'c':
					printf("%s%c", kdn, va_arg(vari, int));
					break;
				case 'i':
					printf("%s%d", kdn, va_arg(vari, int));
					break;
				case 'f':
					printf("%s%f", kdn, va_arg(vari, double));
					break;
				case 's':
					chr = va_arg(vari, char *);
					if (!chr)
						chr = "(nil)";
					printf("%s%s", kdn, chr);
					break;
				default:
					z++;
					continue;
			}
			kdn = ", ";
			z++;
		}
	}
	printf("\n"), va_end(vari);
}
