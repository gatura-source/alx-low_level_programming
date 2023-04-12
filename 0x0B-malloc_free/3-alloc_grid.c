#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - creates a gri d with all values set to 0
 * @width: grid width
 * @height: grid height
 *
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		int **ptr_1;
		int *ptr_2;
		int i;
		int j;

		ptr_1 = malloc(height * sizeof(int));
		ptr_2 = malloc(width * sizeof(int));
		i = 0;
		if (ptr_1 != NULL && ptr_2 != NULL)
		{
			while (i < height)
			{
				j = 0;
				while (j < width)
				{
					ptr_2[j] = 0;
					j++;
				}
				ptr_1[i] = ptr_2;
				i++;
			}

			return(ptr_1);
		}
		else
		{
			return (NULL);
		}
	}
}
