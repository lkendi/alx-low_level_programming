#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: linked linst head node
 * @index: index of the node
 * Return: the nth node, or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int current = 0;

	temp = head;
	while (temp != NULL && current != index)
	{
		temp = temp->next;
		current++;
	}
	return (temp);
}
