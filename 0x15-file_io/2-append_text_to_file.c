#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
        int o, w, base = 0;

        if (!filename)
        {
                return (-1);
        }
        o = open(filename, O_WRONLY | O_APPEND);

        if (o == -1)
                return (-1);
        if (!text_content)
                return (1);
        while (text_content[base])
                base++;

        w = write(o, text_content, base);

        if (w < 0)
                return (-1);
        close(o);
        return (1);
}