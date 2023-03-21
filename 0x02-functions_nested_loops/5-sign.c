#include "main.h"
/**
 * print_sign - RTFC
 * @n: func input
 * Description: as above
 * Return: 1 if positive, 0 if 0
 * -1 otherwise
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		r = 0;
	}
	else
	{
		_putchar('-');
		r = -1;
	}
	return (r);
}
