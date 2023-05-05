#include "main.h"

/**
 * flip_bits - a func returns a num of bits nedded to change from one num to another
 * @n: input 
 * @m: another input
 *
 * Return: bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int v;

	count  = 0;
	v = n ^ m;

	while (v != 0)
	{
		if ((v & 1) == 1)
		{
			count++;
		}
		v >>= 1;
	}
	return (count);
}

