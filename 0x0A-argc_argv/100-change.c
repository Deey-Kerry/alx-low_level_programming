#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings
 * Return: minimum number of coins or Error
 */
int main(int argc, char *argv[])
{
	int cents;
	int number_of_coins;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;
		number_of_coins += 1;
	}
	printf("%i\n", number_of_coins);
	return (0);
}
