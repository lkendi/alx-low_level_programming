#include "lists.h"

/**
 * sum_listint - sums all the data in a linked list
 * @head: head node
 * Return: 0 if the list is empty, else sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (0);
	}
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
