#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: the head of list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *phree;

	while (head)
	{
		phree = head;
		head = head->next;
		free(phree);
	}
}
