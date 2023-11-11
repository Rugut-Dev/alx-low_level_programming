#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in list
 *
 * @head: start of list
 * Return: returns sum of data in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int i = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		i += temp->n;
	}
	return (i);
}
