#include "lists.h"

/**
 * sum_dlistint - sum all the ints in list
 * @head: head of the list
 * Return: sum or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	/* declarations */
	int sum = 0;

	/*if list is empty */
	if (!head)
		return (0);
	/* otherwise, add them up */
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
