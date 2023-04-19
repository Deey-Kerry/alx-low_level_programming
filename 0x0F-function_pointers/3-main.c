#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - beginning of a function
 * @argc: number of arguements in a function
 * @argv: array of arguements in a one dimensional array
 * Return: function
 */
int main(int argc, char *argv[])
{
	char b;
	int kd1, kd2, output;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	kd1 = atoi(argv[1]);
	kd2 = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(98);
	}

	b = *argv[2];

	if ((b == '/' || b == '%') && kd2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	output = func(kd1, kd2);

	printf("%d\n", output);

	return (0);
}
