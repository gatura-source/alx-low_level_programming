#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates mem for elements nmemb of sizze bytes
 * @nmemb: array size
 * @size: elements type size
 *
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		void *ptr;

		ptr = malloc(nmemb * size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			bzero(ptr, nmemb * size);

			return (ptr);
		}
	}
}


