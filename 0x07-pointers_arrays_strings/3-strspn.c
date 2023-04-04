#include "main.h"

/**
 * _strspn - returns no of bytes in the initial segment of s
 * @s: string input 1
 * @accept: string input 2
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int len_a;
	int len_b;
	unsigned int len_c;
	int i;
	int j;

	len_a = 0;
	len_b = 0;
	len_c = 0;

	while (s[len_a] != '\0')
	{
		len_a++;
	}

	while (accept[len_b] != '\0')
	{
		len_b++;
	}

	for (i = 0; i <= len_a; i++)
	{
		for (j = 0; j <= len_b; j++)
		{
			if (s[j] == accept[i])
			{
				len_c++;
			}
		}
	}

	return (len_c);
}


