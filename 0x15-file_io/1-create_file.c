#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file to create and text_content
 * @text_content: NULL terminated string to write to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int w, o, base = 0;

	if (!filename)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		base = 0;

		while (text_content[base])
		{
			base++;
		}
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, base);

	if (o == -1 || w == -1)
	{
		return (-1);
	}
	close(o);

	return (1);
}
