#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes struct dog
 * @d: struct skeleton
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: initializes dog type
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	else
	{
		;
	}
}
