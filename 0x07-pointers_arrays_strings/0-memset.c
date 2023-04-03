#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: bytes of the memory area pointed to
 * @b: constant byte
 * @n: bytes of the memory
 * Return: memory
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
