#include "main.h"

/**
 * print_diagonal - prints values diagonal
 * @n: func input
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int j;
	int i;

	j = 0;

	while (n > 0)
	{
		i = j;
		while (i > 0)
		{
			_putchar(32);
			i--;
		}
		_putchar(92);
		_putchar('\n');
		j++;
		n--;
	}
	if (j < 1)
	{
		_putchar('\n');
	}
}

