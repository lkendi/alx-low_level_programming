#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to the head node
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *temp;

	prev = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	*head = prev;
	return (*head);
}
