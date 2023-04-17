#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates new dog based on struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dogg;
	dog_t *snoop;

	snoop->name = strcpy(snoop->name, name);
	snoop->age = age;
	snoop->owner = strcpy(snoop->owner, owner);

	if (snoop != NULL)
	{
		return (snoop);
	}
	else
	{
		return (NULL);
	}
}
