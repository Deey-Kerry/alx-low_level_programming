#include "main.h"
#include <stdio.h>
/**
 * main - program that prints its name
 * @argc:  number of arguments passed to the program
 * @argv: one-dimensional array of strings
 * Return: name
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
