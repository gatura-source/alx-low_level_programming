#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates mem using malloc
 * @b: mem size
 *
 * Return: 0 on success, NULL on failure
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);

	}
	else
	{
		return (ptr);
	}
}
