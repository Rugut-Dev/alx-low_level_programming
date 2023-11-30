#include "hash_tables.h"

/**
 * hash_table_get - retrieves value of key
 * @ht: hash table
 * @key: key
 *
 * Return: NULL or value if success
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
