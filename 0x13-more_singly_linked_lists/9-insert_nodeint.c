#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head node
 * @idx: index where the node should be added
 * @n: number that the new node will hold
 * Return: address of the new node or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *prev_node;
	unsigned int current = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	temp = *head;
	prev_node = NULL;
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	while (temp != NULL && current != idx)
	{
		prev_node = temp;
		temp = temp->next;
		current++;
	}
	if (current != idx)
	{
		free(new_node);
		return (NULL);
	}
	prev_node->next = new_node;
	new_node->next = temp;
	return (new_node);
}
