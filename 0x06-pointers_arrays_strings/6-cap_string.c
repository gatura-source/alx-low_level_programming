#include "main.h"
#include <ctype.h>
#include <stdlib.h>


/**
 * char_to_int - char to int
 * @c: input
 *
 * Return: int
 */

int char_to_int(int c)
{
	return (c);
}

/**
 * cap_string - capitalizes first char of string
 * @s: string input
 *
 * Return: pointer to s
 */

char *cap_string(char *s)
{
	int len;
	int i;
	int j;
	int b;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		for (j = 97; j < 123; j++)
		{
			b = char_to_int(s[i]);
			if ((b == 32 || s[i] == '\n' || b == 46) && (s[i + 1] == j))
			{
				s[i + 1] = toupper(s[i + 1]);
			}
		}
	}

	return (s);
}
