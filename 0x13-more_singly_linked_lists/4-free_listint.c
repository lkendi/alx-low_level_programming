#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: linked list head node
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
