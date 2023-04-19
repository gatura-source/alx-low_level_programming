#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
#include <stdbool.h>
/**
 * int_index - searches for int int an array
 * @array: array input
 * @size: array size
 * @cmp: function used to compare values
 * Return: elem if matches or -1 on failure
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int iter;
	bool ret;

	ret = false;
	iter = 0;
	if (array != NULL && cmp != NULL)
	{
		if (size >= 0)
		{
			while (iter < size)
			{
				ret = cmp(array[iter]);
				if (ret == true)
				{
					return (iter);
				}
				iter++;
			}
			if (ret == false)
			{
				return (-1);
			}
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		return (-1);
	}

	return (0);
}
