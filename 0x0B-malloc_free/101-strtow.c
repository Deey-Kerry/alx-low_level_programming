#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - function that splits a string into words
 * @str: string input
 * Return: split string
 */
char **strtow(char *str)
{
	char **words;
	int number, base, z;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
	{
		return (NULL);
	}

	z = base = number = 0;
	while (str[z])
	{
		if (number == 0 && str[z] != ' ')
			number = 1;
		if (z > 0 && str[z] == ' ' && str[z - 1] != ' ')
		{
			number = 0;
			base++;
		}
		z++;
	}

	base += number == 1 ? 1 : 0;
	if (base == 0)
	{
		return (NULL);
	}
	words = (char **)malloc(sizeof(char *) * (base + 1));
	if (words == NULL)
	{
		return (NULL);
	}
	util(words, str);
	words[len] = NULL;
	return (words);
}
/**
* util - fetching words
* @words: array of characters
* @str: string
* Return: words
*/
void util(char **words, char *str)
{
	int m, n, kicka, number;

	m = n = number = 0;
	while (str[m])
	{
		if (number == 0 && str[m] != ' ')
		{
			number = 1;
			kicka = m;
		}

		if (m > 0 && str[m] == ' ' && str[m - 1] != ' ')
		{
			create_word(words, str, kicka, m, n);
        		n++;
        		number = 0;
     		}
	m++;
	}

	if (number == 1)
		create_word(words, str, kicka, m, n);
}
/**
* create_word - creates a word and inserts it
* @words: array of characters
* @str: string
* @start: starting index of a word
* @end: stopping index of word
* @index: the position
*/
void create_word(char **words, char *str, int start, int end, int index)
{
	int a, b;

  	a = end - start;
  	words[index] = (char *)malloc(sizeof(char) * (a + 1));

	for (b = 0; start < end; start++, b++)
	{
		words[index][b] = str[start];
	}

	words[index][b] = '\0';
}
