#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - function that reallocates a memory block using malloc
 * and free
 * @ptr: pointer
 * @old_size: old allocated space
 * @new_size: new allocated space
 * Return: reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *news, *oldies;

	if (ptr != NULL)
	{
		news = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (0);
	}
	oldies = malloc(new_size);
	if (oldies == NULL)
	{
		return (0);
	}
	a = 0;
	while (a < (old_size || a < new_size))
	{
		*(oldies + a) = news[a];
		a++;
	}

	free(ptr);
	return (oldies);
}
