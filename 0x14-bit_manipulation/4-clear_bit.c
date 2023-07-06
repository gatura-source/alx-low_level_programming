#include "main.h"
#include <limits.h>
/**
 * clear_bit - sets a bit to 0 at a given index
 * @n: int value
 * @index: position
 *
 * Return: 1 0r -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned long int _n;
	unsigned int size;

	size = sizeof(*n) * 8 - 1;
	_n = *n;

	if (index < size && *n < ULONG_MAX)
	{
		mask = ~(1 << index);
		*n = mask & _n;
		return (1);
	}
	return (-1);
}
