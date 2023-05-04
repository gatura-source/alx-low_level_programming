#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary number of a decimal
 * @n: dec input
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int ULBITS_SIZE;
	unsigned long int MASK;
	int one_flag;

	one_flag = 0;
	ULBITS_SIZE = sizeof(unsigned long int) * 8 - 1;
	MASK = 1UL;
	MASK <<= ULBITS_SIZE;

	while (MASK > 0)
	{
		if (n & MASK)
		{
			_putchar('1');
			one_flag = 1;
		}
		else if (one_flag)
		{
			_putchar('0');
		}
		MASK >>= 1;
	}
	if (!one_flag)
	{
		_putchar('0');
	}
}
