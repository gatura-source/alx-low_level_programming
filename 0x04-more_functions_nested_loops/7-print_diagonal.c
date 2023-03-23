#include "main.h"
/**
 * helper_f - helper function for print_diagonal
 * @m: func input
 *
 * Return: void
 */
void helper_f(int m)
{
	int i;

	if (m <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < m; i++)
		{
			_putchar(32);
		}
	}
}
/**
 * print_diagonal - prints values diagonal
 * @n: func input
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 1; j <= n; j++)
		{
			helper_f(j);
			_putchar(92);
			_putchar('\n');
		}
	}
}

