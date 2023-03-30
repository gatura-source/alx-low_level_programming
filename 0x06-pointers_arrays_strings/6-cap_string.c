#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

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
 * in - checks for membership
 * @element: int input
 *
 * Return: bool
 */

bool in(int element)
{
	int ascii_codes[11];
	int i;
	int t;

	ascii_codes[0] = 34;
	ascii_codes[1] = 40;
	ascii_codes[2] = 41;
	ascii_codes[3] = 44;
	ascii_codes[4] = 46;
	ascii_codes[5] = 63;
	ascii_codes[6] = 21;
	ascii_codes[7] = 123;
	ascii_codes[8] = 125;
	ascii_codes[9] = 59;
	ascii_codes[10] = 32;

	for (i = 0; i < 11; i++)
	{
		if (ascii_codes[i] == element)
		{
			t = true;
			break;
		}
		else
		{
			t = false;
		}
	}

	return (t);
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
	bool t;

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
			t = in(b);
			if ((s[i] == '\n' || s[i] == '\t' || t == true) && (s[i + 1] == j))
			{
				s[i + 1] = toupper(s[i + 1]);
			}
		}
	}

	return (s);
}
