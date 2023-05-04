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
	double ret;
	int i;
	char j;
	int k;

	ret = 0;
	i = 0;
	if (b != NULL)
	{
		k = strlen(b) - 1;

		while (b[i] != '\0' && k >= 0)
		{
			j = b[i];
			if (j == '1' || j == '0')
			{
				ret += power(2, k) * (j - '0');

			}
			else
			{
				return (0);
			}
			i++;
			k--;
		}
	}
	else
	{
		return (0);
	}
	return (ret);
}
