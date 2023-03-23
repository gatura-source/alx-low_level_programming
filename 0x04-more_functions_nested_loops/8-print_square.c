#include "main.h"
/**
 * print_square - prints square
 * @size: square size
 *
 * Return: void
 */

void print_square(int size)
{
	int a;
	int b;

	if (size < 1)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
	}
	}
}
