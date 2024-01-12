#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list
 * @head: head node
 * @index: index of the node to retrieve
 * Return: the element at specified index or NULL if the node does not exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	temp = head;

	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}