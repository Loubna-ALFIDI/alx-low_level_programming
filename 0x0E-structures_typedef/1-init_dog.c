#include "dog.h"

/**
 * init_dog - initialize a variable of type dog
 * @d: struct dog
 * @name: char*
 * @age: float
 * @owner: char*
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (!d)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
