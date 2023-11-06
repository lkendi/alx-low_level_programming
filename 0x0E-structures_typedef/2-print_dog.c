#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: struct dog pointer
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: ");
	if (d->name != NULL)
	{
		printf("%s \n", d->name);
	}
	else
	{
		printf("(nil)\n");
	}
	printf("Age: %f\n", d->age);
	printf("Owner: ");
	if (d->owner != NULL)
	{
		printf("%s\n", d->owner);
	}
	else
	{
		printf("(nil)");
	}

}
