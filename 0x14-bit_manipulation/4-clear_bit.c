#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets a bit at 0
 * @n: input int
 * @index: index
 *
 * Return: 1 if success, -1 on fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
