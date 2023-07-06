#include "main.h"

/**
 * get_bit - get value of bit at a given position
 * @n: int value
 * @index: index
 *
 * Return: value bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned int s;

	s = sizeof(n) * 16 - 1;
	i = 0;

	while (i <= s)
	{
		if (i == index)
		{
			return ((n >> i) & 1);
		}
		i++;
	}
	return (-1);
}
