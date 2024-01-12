#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head node of the list
 * Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t num_nodes;

	num_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
