#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head of list
 * @index: where to delete
 * Return: the 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* declarations */
	dlistint_t *location, *temp;

	if (head)
	{
	/* set location to head, check for index == 0 */
		location = *head;
		if (index < 1)
		{
			if (!location)
				return (-1);
			*head = location->next;
			if (*head)
				(*head)->prev = NULL;
			free(location);
			return (1);
		}
	/* look for the index, delete the right node, or fail if !index node */
		for (; location; location = location->next, index--)
		{
			if (index - 1 == 0)
			{
				temp = location->next;
				if (!temp)
					break;
				location->next = temp->next;
				if (temp->next)
					temp->next->prev = location;
				free(temp);
				return (1);
			}
		}
	}
	return (-1);
}
