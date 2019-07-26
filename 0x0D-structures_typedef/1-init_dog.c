#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initiates a struct type variable
 * @d: struct pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: initiates a structure type
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
