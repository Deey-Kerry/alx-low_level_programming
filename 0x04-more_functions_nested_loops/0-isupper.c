#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: input integer
 *
 * Return: uppercase character or otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
