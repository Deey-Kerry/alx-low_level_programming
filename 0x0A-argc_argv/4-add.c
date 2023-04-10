#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds two positive numbers
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings
 * Return: added numbers or Error
 */
int main(int argc, char *argv[])
{
	int a, b, total = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[a]);
	}
	printf("%i\n", total);
	return (0);
}
