#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings
 * Return: multiplied numbers or Error if no two arguements
 */
int main(int argc, char *argv[]);
{
	int k, l;
	if (argc == 1)
	{
		k = atoi(argv[1]);
		l = atoi(argv[2]);

		printf("%i\n", k * l);
		return (0);
	}
	printf("Error\n");
	return (1);
}
