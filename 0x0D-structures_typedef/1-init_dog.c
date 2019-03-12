#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - dog struct
 * @name: dog name
 * @age: dog age
 * @owner: owner
 *
 * Description: dog info struct
 */
struct dog
{
	float age;
	char *name;
	char *owner;
}

/**
 * init_dog - initiates a struct type variable
 * @d: struct pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: initiates a struct type
 */

(void) init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
