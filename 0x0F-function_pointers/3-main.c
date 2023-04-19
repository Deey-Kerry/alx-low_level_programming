#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * main - beginning of a function
 * @argc: number of arguements in a function
 * @argv: array of arguements in a one dimensional array
 * Return: function
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char *op;
	int len1, len2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = atoi(argv[1]);
	op = argv[2];
	len2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && len2 == 0) ||
			(*op == '%' && len2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(len1, len2));

	return (0);
}
