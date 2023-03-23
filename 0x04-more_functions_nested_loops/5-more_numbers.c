#include "main.h"

/**
 * more_numbers - prints 0-14 * 10
 *
 * Return: void
 */

void more_numbers(void)
{
	int a;
	int b;
	int c;
	int d;

	c = 49;
	d = 48;

	for (a = 0; a < 10; a++)
	{
		for (b = 48; b < 58; b++)
		{
			_putchar(b);
		}
		for (d = 48; d <= 52; d++)
		{
			_putchar(c);
			_putchar(d);
		}
		_putchar('\n');
	}
}
