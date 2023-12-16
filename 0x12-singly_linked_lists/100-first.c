#include "lists.h"

/**
 * first - executed before main
 * Return: nothing
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * run_funcs - executes all functions in the linked list
 * @head: pointer to linked list head node
 * Return: nothing
 */

void run_funcs(func_t *head)
{
	while (head != NULL)
	{
		head->func();
		head = head->next;
	}
}

/**
 * add - adds a function to the linked list
 * @head: pointer to head node of the linked list
 * @function: function to add
 * Return: nothing
 */

void add(func_t **head, void (*function)(void))
{
	func_t *new = malloc(sizeof(func_t));

	if (new == NULL)
	{
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	new->func = function;
	new->next = *head;
	*head = new;
}
