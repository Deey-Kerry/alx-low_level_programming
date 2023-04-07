#include "main.h"
/**
 * _isalpha - This shows if c is a letter,lowercase or uppercase
 *
 * @c: ASCII character code
 *
 * Return: 1 for letter. 0 for uppercase or lowercase
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
