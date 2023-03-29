#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using rot13
 * @n: pointer
 * Return: string
 */
char *rot13(char *n)
{
	int a;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; n[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (n[a] == data1[b])
			{
				n[a] = datarot[b];
				break;
			}
		}
	}
	return (n);
}
