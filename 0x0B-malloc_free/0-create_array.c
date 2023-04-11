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

	ptr = malloc(size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	else
	{
		ptr[0] = c;
	}

	return (ptr);

}
