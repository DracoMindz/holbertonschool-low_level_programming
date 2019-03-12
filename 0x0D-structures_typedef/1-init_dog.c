
#include <stdio.h>

/**
 *init_dog - function that initialize struct variable
 * @d: pointer
 * @name: dog name
 * @age: dog age
 * @owner: Dog owner
 *
 * Description: function that initializes a struct
 *
 * Return: p
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
#ifndef _DOG_
#define _DOG_

/**
 * struct dog - dog struct
 * @d: dog age
 * @name: dog name
 * @age: dog age
 * @owner: owner
 *
 * Description: dog info struct
 */
{
	struct dog *p;

	p->d = d;
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
