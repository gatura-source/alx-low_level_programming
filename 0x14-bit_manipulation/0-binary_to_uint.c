#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - bin to int
 * @b: pointer to bin
 *
 * Return: 0 or converted int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret;
	int i;
	unsigned int exp;
	int len;

	len = 0;
	exp = 1;
	ret = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '1' || *b != '0')
		{
			return (0);
		}
		len++;
		b++;
	}
	for (i = len; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			ret += (b[i] - '0') * exp;
		}
		exp *= 2;
	}
	return (ret);
}


