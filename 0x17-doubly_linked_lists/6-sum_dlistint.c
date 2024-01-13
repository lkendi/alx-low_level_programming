#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data of a doubly linked list
 * @head: head node
 * Return: sum, or 0 if the linked list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
