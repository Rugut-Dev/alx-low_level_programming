#include "lists.h"

/**
 * listint_len - returns num of elements in a linked listint_t list
 * @h: linked list
 *
 * Return: num of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
