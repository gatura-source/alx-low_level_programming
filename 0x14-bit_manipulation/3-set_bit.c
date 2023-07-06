#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets a bit at a given position
 * @n: Value
 * @index: positioin to set
 *
 * Return: 0 or -1 pon failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	unsigned int size;
	unsigned long int _n;

	size = sizeof(n) * 16 - 1;
	_n = *n;
	if (index < size)
	{

		mask = 1 << index;
		*n = mask | _n;
		return (0);
	}
	return (-1);
}
