#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the head node
 * Return: size of the list that was free'd
 * Also set the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	listint_t *temp, *current;

	if (*h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
		num++;
	}
	*h = NULL;
	return (num);
}
