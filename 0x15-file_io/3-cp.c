#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_memory(char *file);
void close_file(int k);

/**
 * create_memory - function that allocates space in memory
 * @file: file name
 * Return: memory location
 */
char *create_memory(char *file)
{
	char *memory;

	memory = malloc(sizeof(char) * 1024);

	if (!memory)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (memory);
}

/**
 * close_file - a function that close the file
 * @k: file
 */
void close_file(int k)
{
	int z;

	z = close(k);

	if (z == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close k %d\n", k);
		exit(100);
	}
}

/**
 * main - start of main function
 * @argc: number of arguments
 * @argv: array of arguments in one dimensional array
 * Return: arguement
 */
int main(int argc, char *argv[])
{
	int begin, end, r, w;
	char *memory;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	memory = create_memory(argv[2]);
	begin = open(argv[1], O_RDONLY);
	r = read(begin, memory, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (begin == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(memory);
			exit(98);
		}

		w = write(end, memory, r);
		if (end == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(memory);
			exit(99);
		}

		r = read(begin, memory, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(memory);
	close_file(begin);
	close_file(end);

	return (0);
}
