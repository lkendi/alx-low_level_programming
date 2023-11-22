#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at specified index
 * @head: pointer to the head node
 * @index: index of node to delete
 * Return: 1 if successful, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int current = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	prev = *head;
	while (temp != NULL && current != index)
	{
		prev = temp;
		temp = temp->next;
		current++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	else
	{
		prev->next = temp->next;
		free(temp);
		return (1);
	}
}
