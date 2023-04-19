#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argc: number of arguments in a function
 * @argv: array of arguments in a one dimensional array
 * Return: opcodes
 */
int main(int argc, char *argv[])
{
	int len, a;
	char *ski;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	len = atoi(argv[1]);

	if (len < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ski = (char *)main;

	for (a = 0; a < len; a++)
	{
		if (a == len - 1)
		{
			printf("%02hhx\n", ski[a]);
			break;
		}
		printf("%02hhx ", ski[a]);
	}
	return (0);
}
