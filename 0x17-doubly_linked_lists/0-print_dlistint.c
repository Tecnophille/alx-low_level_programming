#include "lists.h"

/**
 * print_dlistint - print elements of doubly linked list
 * @h: the head of list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	/* declarations */
	size_t nodes = 0;

/* walk through list and print */
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
