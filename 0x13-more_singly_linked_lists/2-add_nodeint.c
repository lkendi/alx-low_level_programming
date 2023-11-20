#include "lists.h"
/**
 * add_nodeint - add a new node to the beginning of a linked list
 * @head: pointer to the linked list head
 * @n: number that the new node will hold
 * Return: address of the new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
