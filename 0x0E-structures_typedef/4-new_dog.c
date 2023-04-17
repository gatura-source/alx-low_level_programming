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

	snoop = &dogg;
	snoop->name = malloc(sizeof(char) * (strlen(name) + 1));
	snoop->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (snoop->name == NULL || snoop->owner == NULL)
	{
		free(snoop->name);
		free(snoop->owner);
		free(snoop->age);
		return (NULL);
	}
	else
	{
		snoop->name = strcpy(snoop->name, name);
		snoop->age = age;
		snoop->owner = strcpy(snoop->owner, owner);
		return (snoop);
	}
}
