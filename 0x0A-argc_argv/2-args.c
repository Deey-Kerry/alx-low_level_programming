#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings
 * Return: all arguments
 */
int main(int argc, char *argv[])
{
	int total = 0;

	if (argc > 0)
	{
		while (total < argc)
		{
			printf("%s\n", argv[total]);
			total++;
		}
	}
	return (0);
}
