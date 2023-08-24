#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at teh beginning of a list_t list
 * @head: double pointer to list_t
 * @str: new string to be added
 *
 * Return: Address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *a;
	unsigned int  len = 0;

	while (str[len])
		len++;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	a->str = strdup(str);
	a->len = len;
	a->next = (*head);
	(*head) = a;

	return (*head);
}
