#include "main.h"

/**
 * print_line - prints line with respect to n
 * @n: func input
 *
 * Return: 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(45);
	}
	_putchar('\n');
}
