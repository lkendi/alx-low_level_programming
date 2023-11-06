#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initialize a varaible of type struct dog
 * @d: new variable of struct dog
 * @name: name value for d
 * @age: age value for d
 * @owner: owner value for d
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
