#include "dog.h"

/**
 * init_dog - initializes dog struct
 * @d: pointer to address
 * @name: dog's name
 * @age: Dog's age
 * @owner: dog's owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
