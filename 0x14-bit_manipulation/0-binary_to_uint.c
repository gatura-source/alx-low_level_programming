#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * power - my pow()
 * @base: as base
 * @expo: exponent
 *
 * Return: Exponentiation
 */

double power(double base, int expo)
{
	int i;
	double res;

	res = 1;
	for (i = 0; i < expo; i++)
	{
		res *= base;
	}
	return (res);
}
/**
 * binary_to_uint - converts binary to UINT
 * @b: binary input
 *
 * Return: UINT
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret;
	int i;

	ret = 0;
	i = 0;
	if (b != NULL)
	{
		while (b[i] != '\0')
		{
			if (b[i] == '0' || b[i] == '1')
			{
				ret = ret * 2 + (b[i] - '0');
			}
			else
			{
				return (0);
			}
			i++;
		}
	}

	return (ret);
}
