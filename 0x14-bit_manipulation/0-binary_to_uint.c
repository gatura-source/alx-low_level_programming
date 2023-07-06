#include "main.h"
/**
 * binary_to_uint - Converts binary to uint
 * @b: binary input
 *
 *
 * Return: 0 or uint
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret;
	unsigned int exp;
	int len;

	len = 0;
	exp = 1;
	ret = 0;
	if (b == NULL)
	{
		return (0);
	}

	while (b[len] != '\0')
	{
		len++;
	}
	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		ret += (b[len] - '0') * exp;
		exp *= 2;
	}
	return (ret);
}
