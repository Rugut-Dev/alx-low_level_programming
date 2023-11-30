#include "hash_tables.h"

/**
 * hash_table_create - creates hash table
 * @size: size of array
 *
 * Return: hash table ptr
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	/*	unsigned long int i;*/
	hash_table_t *hash_table = NULL;

	if (size < 1)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table->array);
		return (NULL);
	}

	hash_table->size = size;
	return (hash_table);
}
