#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if digit in 0-9
 * @d: func input
 *
 * Return: 1 is digit, 0 otherwise
 */

int _isdigit(int d)
{
	int r;

	if (d >= 48 && d <= 57)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}

	return (r);
}
