#include "lists.h"
/**
 * add_dnodeint_end - add a new node to the end of a doubly linked list
 * @head: pointer to the head node
 * @n: new element to add
 * Return: address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	
	new_node->prev = temp;
	temp->next = new_node;
	
	return (new_node);

}
