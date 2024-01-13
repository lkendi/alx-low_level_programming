#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a specified index
 * @head: pointer to the head node
 * @index: specified index of node to delete
 * Return: 1 if succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index  && temp != NULL; i++)
		temp = temp->next;
	if (temp == NULL)
		return (-1);

	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}
