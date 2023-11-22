#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: pointer to the head node
 * Return: head node's data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (*head == NULL)
	{
		return (0);
	}
	head_data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (head_data);
}
