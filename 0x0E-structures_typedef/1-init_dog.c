#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type dog
 * @d: struct dog
 * @name: char*
 * @age: float
 * @owner: char*
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
