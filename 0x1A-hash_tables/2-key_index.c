#include "hash_tables.h"

/**
 * key_index - determines the index at which the key/val pair should be stored
 * @key: key for index
 * @size: size of the array
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key,
			    unsigned long int size)
{
	unsigned long int hash_val, i;

	hash_val = hash_djb2(key);
	i = hash_val % size;

	return (i);
}
