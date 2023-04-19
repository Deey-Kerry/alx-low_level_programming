#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - This function prints a name
 * @name: name of person
 * @f: pointer to f
 * Return: name
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}

	f(name);
}
