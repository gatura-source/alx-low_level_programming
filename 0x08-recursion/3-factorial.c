#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: int input
 *
 * Return: factorial
 */

int factorial(int n)
{
	int q;

	if (n > 1)
	{

		q = n * factorial(n - 1);
	}
	else
	{
		q = 1;
	}

	if (n < 1)
	{
		return (-1);
	}


	return (q);
}
