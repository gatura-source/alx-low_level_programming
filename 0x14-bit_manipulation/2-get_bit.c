#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - function to get a value at an index
 * @n: value to compare
 * @index: position to compare
 *
 *
 * Return: 0 or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
	{
		return (-1);
	}
	n >>= index;
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
