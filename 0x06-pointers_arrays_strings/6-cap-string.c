#include "main.h"
#include <ctype.h>
#include <stdlib.h>
/**
 * cap_string - capitalizes first char of string
 * 
 * Return: pointer
 */

int char_to_int(int c)
{
	return (c);
}

char *cap_string(char *s)
{
	size_t len;
	size_t i;
	int j;
	char k[];

	len = sizeof(s);

	for (i = 0, i < len && s[i] != '\0'; i++)
	{
		k = s[i];
		k[0] = toupper(k[0]);
	}
}
