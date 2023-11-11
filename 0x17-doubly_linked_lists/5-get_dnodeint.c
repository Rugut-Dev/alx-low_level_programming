#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 *
 * @head: pointer to first node
 * @index: index of node to be returned
 * Return: nth node of list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (temp != NULL && i < index)
	{
		temp =  temp->next;
		i++;
	}

	if (i != index || temp == NULL)
		return (NULL);
	return (temp);
}
