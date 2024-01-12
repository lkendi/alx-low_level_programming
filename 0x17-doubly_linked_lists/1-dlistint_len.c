#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: head node
 * Return: number of elements in the doubly linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
