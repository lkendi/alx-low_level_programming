#include "lists.h"
/**
 * find_listint_loop - finds loop in a linked list
 * @head: pointer to the head node
 * Return: pointer to loop start or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p1, *p2;

	p1 = head;
	p2 = head;

	while (p1 && p2 && p2->next)
	{
		p1 = p1->next;
		p2 = p2->next->next;

		if (p1 == p2)
		{
			p1 = head;
			while (p1 != p2)
			{
				p1 = p1->next;
				p2 = p2->next;
			}
			return (p1);
		}
	}
	return (NULL);
}
