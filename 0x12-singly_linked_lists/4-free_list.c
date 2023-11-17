#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head node
 * Return: nothing
 *
 * Note: free the string, then the nodes, one by one
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head != NULL)
	{
		t = head;
		head = head->next;
		free(t->str);
		free(t);
	}
}
