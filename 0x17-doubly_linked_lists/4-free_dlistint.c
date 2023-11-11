#include "lists.h"

/**
 * free_dlistint - frees a list
 *
 * @head: points to the start of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head != NULL)
	{
		do {
			temp = head;
			head = head->next;

			free(temp);
		} while (head != NULL);
	}
}
