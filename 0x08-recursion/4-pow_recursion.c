#include "main.h"

/**
 * _pow_recursion - pow but with recursion
 * @x: value to be exponentiated
 * @y: exponent
 *
 * Return: int
 */

int _pow_recursion(int x, int y)
{

	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}

}
