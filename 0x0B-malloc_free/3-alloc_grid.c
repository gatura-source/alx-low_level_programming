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

		ptr_1 = malloc(height);
		ptr_2 = malloc(width);
		i = 0;
		if (ptr_1 != NULL && ptr_2 != NULL)
		{
			for (i = 0; i < height; i++)
			{
				ptr_1[i] = ptr_2;
			}
			for (i = 0; i < height; i++)
			{
				for (j = 0; j < width; j++)
				{
					ptr_1[i][j] = 0;
				}
			}
			if (ptr_1 == NULL)
			{
				return (NULL);
			}
			else
			{
				return (ptr_1);
			}
		}
		else
		{
			return (NULL);
		}
	}
}
