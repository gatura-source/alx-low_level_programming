#include <stddef.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executesa function given as an element of an array
 * @array: array of func pointers
 * @size: array size
 * @action: array element(func pointer)
 * Description: executes a func from its pointer given as an arr element
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t iter;
	const unsigned int zero = 0;

	iter = 0;
	if (array != NULL && action != NULL)
	{
		if (size >= zero)
		{
			while (iter < size)
			{
				action(array[iter]);
				iter++;
			}
		}
	}
	else
	{
		;
	}
}
