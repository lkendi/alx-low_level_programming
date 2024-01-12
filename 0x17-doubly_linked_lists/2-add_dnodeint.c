#include "lists.h"
/**
 * add_dnondeint - adds a new node to the beginning of a doubly linked list
 * @head: pointer to the head node
 * @n: new element
 * Return: address of the new element or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}