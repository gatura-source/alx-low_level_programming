#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcmp - compares two strings
 * @s1: input s1
 * @s2: input s2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	size_t s1_len;
	size_t i;
	int x;
	int y;
	int res;

	s1_len = strlen(s1);
	for (i = 0; i <= s1_len; i++)
	{
		x = s1[i];
		y = s2[i];
		res = x - y;
		if (res == 0)
		{
			;
		}
		else if (res != 0)
		{
			break;
		}
	}
	return (res);
}
