#include <stdio.h>
#include <stddef.h>
#include "dog.h"
#include <math.h>
/**
 * print_dog - prints struct dog
 * @d: struct dog
 *
 * Description: prints out contents of struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
	else
	{
		;
	}
}
