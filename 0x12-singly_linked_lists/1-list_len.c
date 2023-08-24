#include "lists.h"

/**
 * list_len -  returns number of elements ina a linked list_t list
 * @h: pointer
 *
 * Return: num of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
