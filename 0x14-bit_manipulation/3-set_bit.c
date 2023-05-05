#include "main.h"
#include <stdlib.h>

/**
 * set_bit - sets a bit at a given index
 * @n: input
 * @index: index
 *
 * Return: 1 if successful, -1 failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	*n |= 1 << index;
	return (1);
}
