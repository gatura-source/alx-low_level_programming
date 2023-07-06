#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints bin representation of a number
 * @n: int input
 *
 * Return: prints out int in bin
 */

void print_binary(unsigned long int n)
{
	int s;
	int i;
	int f;

	f = 0;
	s = sizeof(n) * 8 - 1;
	if (n == 0 || n == 1)
	{
		_putchar(n & 1 ? '1' : '0');
		return;
	}
	while (s >= 0)
	{
		i = (n >> s) & 1;
		if (f == 1)
		{
			putchar(i + '0');
		}
		else
		{
			if (i == 1)
			{
				_putchar(i + '0');
				f = 1;
			}
		}
		s--;
	}
}
