#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: head node of the linked list
 * Return: number of nodes in the list
 * exit(98) if the function fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	const listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		num++;

		if (temp <= temp->next)
		{
			printf("->[%p] %d\n", (void *)temp->next, temp->next->n);
			exit(98);
		}
		temp = temp->next;
	}
	return (num);
}
