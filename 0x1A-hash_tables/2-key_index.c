#include "hash_tables.h"

/**
 * key_index - A function that Gets the index at which a key pair
 * should be stored in an array of a hash table.
 * @key: Key to get the index of a value.
 * @size: size of the array of the hash table.
 *
 * Return: index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
