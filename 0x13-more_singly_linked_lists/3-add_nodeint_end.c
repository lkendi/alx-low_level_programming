#include "lists.h"
/**
 * add_nodeint_end - add a new node to the end of a linked list
 * @head: pointer to the head node
 * @n: int value that new node will have
 * Return: address to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tail;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		tail = *head;
		while(tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
	}
	return (new_node);
}
