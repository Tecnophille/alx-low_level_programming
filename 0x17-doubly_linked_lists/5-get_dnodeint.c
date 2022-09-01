#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node
 * @head: the head of the list
 * @index: the number of the node to get
 * Return: the addy of node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* declarations */
	unsigned int i = 0;
	/* check for NULL */
	if (!head)
		return (NULL);
	/* move through list to index, or bust */
	for (i = 0; i < index; i++)
	{
		if (head->next)
		head = head->next;
		else
			return (NULL);
	}
	return (head);

}
