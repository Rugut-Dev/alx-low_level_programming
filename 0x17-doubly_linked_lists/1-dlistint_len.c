#include "lists.h"

/**
 * dlistint_len - returns the length of linked list
 *
 * @h: head pointer
 * Return: length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
