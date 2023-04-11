#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array with user-defined values
 * @size: array size
 * @c: char initializer
 *
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);

	if (ptr == NULL || size <= 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}

	return (ptr);

}
