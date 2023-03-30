#include "main.h"
#include <stdlib.h>
#include <ctype.h>
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

	len = sizeof(a);

	for (i = 0; i < len && a[i] != '\0'; i++)
	{
		for (j = 97; j < 123; j++)
		{
			b = checkchar_int(a[i]);

			if (b  == j)
			{
				a[i] = toupper(a[i]);
			}
		}
	}

	return (a);
}



