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

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b <= 9)
			{
				_putchar(b + '0');
			}
			else if (b > 9)
			{
				_putchar(b / 10 + '0');
				_putchar(b % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
