#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strchr - locates first occurence of char input
 * @s: string input
 * @c: char  input
 *
 * Return: pointer to c
 */

char *_strchr(char *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	while (*s != '\0' && len != 0)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}


	return (s);
}



