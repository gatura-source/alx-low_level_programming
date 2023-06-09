#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * checkchar_int - returns int version of a char
 * @c: int of char
 *
 * Return: int of char
 */

int checkchar_int(int c)
{
	return (c);
}

/**
 * string_toupper - converts chars to upper
 * @a: pointer input
 *
 * Return: pointer to string
 */

char *string_toupper(char *a)
{
	size_t len;
	size_t i;
	int j;
	int b;

	len = 0;
	while (a[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		for (j = 97; j < 123; j++)
		{
			b = checkchar_int(a[i]);

			if (b == j )
			{
				a[i] = toupper(a[i]);
			}
		}
	}
	return (a);
}
