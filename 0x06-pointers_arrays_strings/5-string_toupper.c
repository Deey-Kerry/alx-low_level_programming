#include "main.h"
/**
 * string_toupper - changes all lowercase letters to uppercase
 * @b: pointer
 * Return: uppercase letters
 */
char *string_toupper(char *b)
{
	int a;

	a = 0;
	while (b[a] != '\0')
	{
		if (b[a] >= 'a' && b[a] <= 'z')
			b[a] = b[a] - 32;
		a++;
	}
	return (b);
}
