#include "main.h"
/**
 * print_last_digit - RTFC
 * @num: func input
 * Description: RTFC
 * Return: int
 */
int print_last_digit(int num)
{
	int r;

	r = num % 10;
	if (r > 0)
	{
		_putchar(r+48);
	}
	else
	{
		r = r * -1;
		_putchar(r+48);
	}
	return (r);
}
