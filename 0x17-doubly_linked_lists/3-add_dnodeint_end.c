#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a d list
 * @head: the head
 * @n: the int to add
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*declarations */
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *location;

	/* check for null && malloc fail, free new if it exists, return NULL */
	if (!head || !new)
		return (new ? free(new), NULL : NULL);
	/* assign some things to new */
	new->n = n;
	new->next = NULL;
	/* if there are no other nodes make new the first and last */
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	/* otherwise, find the end and install new */
	else
	{
		location = *head;
		while (location->next)
		{
			location = location->next;
		}
		location->next = new;
		new->prev = location;
	}
	return (new);
}
