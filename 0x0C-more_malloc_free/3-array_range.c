#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of ints from min to max
 * @min: min int
 * @max: max int
 *
 * Return: pointer to array or NULL on failure
 */

int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}
	else
	{
		int *ptr;
		int range;
		int i;

		range = (max - (min)) + 1;
		ptr = malloc(range * sizeof(int));
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; (i < range) && (min <= max); i++)
			{
				ptr[i] = min;
				/**
				*printf("min at %d\n", min);
				*/
				min++;
			}
		}
		return (ptr);
	}
}
