#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - a program that multiplies two positive numbers
 * @argc: number of arguements
 * @argv: one dimensional array of arguements
 * Return: multiplied numbers
 */
int main(int argc, char *argv[])
{
	unsigned long multiply;
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) <= 0 || atoi(argv[2]) <= 0)
	{
		printf("Error\n");
		exit(98);
	}
	x = 1;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y] != '\0')
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
				printf("Error\n");
				exit(98);
			}
			y++;
		}
		x++;
	}

	multiply = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", multiply);
	return (0);
}
