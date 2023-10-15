#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialise a variable
 * @d: pointer to struct
 * @name: the name of a dog
 * @age: the age of a dog
 * @owner: who the owner is
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
