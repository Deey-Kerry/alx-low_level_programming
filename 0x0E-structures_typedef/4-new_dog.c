#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: input
 * Return: length
 */
int _strlen(char *s)
{
	int x = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		return (x);
	}
	return (0);
}

/**
 * _strcpy - a function that copies a string
 * @dest: destination
 * @src: source
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int base = 0;
	int x;

	for (base = 0; src[base] != '\0'; base++)
	{
		for (x = 0; x < base; x++)
		{
			dest[x] = src[x];
		}
		dest[x] = '\0';


		return (dest);
	}
	return (0);
}

/**
 * new_dog - a function that Creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int base1, base2;


	base1 = _strlen(name);
	base2 = _strlen(owner);


	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);


	dog->name = malloc(sizeof(char) * (base1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (base2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;


	return (dog);
}
