#include "main.h"

/**
 * print_binary - prints binary number of a decimal
 * @n: dec input
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (n !=  0)
		{
			m = n % 2;
			if (m == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('1');
			}
			n /= 2;
		}
	}
}
