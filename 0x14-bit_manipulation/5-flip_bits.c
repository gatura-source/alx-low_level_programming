#include "main.h"

/**
 * flip_bits - Returns number of bits needed to change a num
 * @num1: original number
 * @num2: dest number
 *
 * Return: Number of bits flipped
 */

unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int x_res;
	unsigned int count;

	x_res = num1 ^ num2;
	count = 0;

	if(x_res == 0)
	{
		return (0);
	}
	while (x_res != 0)
	{
		x_res &= x_res - 1;
		count++;
	}
	return (count);
}
