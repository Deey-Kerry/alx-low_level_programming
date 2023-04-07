#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: number of bytes in the initial segment
 * @accept: bytes to be accepted
 * Return: length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				n++;
				break;
			}

			else if (accept[k + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
