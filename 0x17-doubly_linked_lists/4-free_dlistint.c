#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: points to the start of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *next;

	temp = head;

	do {
		next = temp->next;
		free(temp);
		temp = next;

	} while (temp != NULL);

	head = NULL;
}
