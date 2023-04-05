#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - works std strpbrk
 * @s: haystack
 * @accept: needle
 *
 * Return: Pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;
	char *ptr;
	const char *t


	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	while (accept[b] != '\0')
	{
		b++;
	}


	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}


	while (*s != '\0')
	{
		t = accept;

		while (*t != '\0')
		{
			if (*s == *t)
			{
				ptr = &s;
			}
			t++;
		}
		s++;

	}

	return (NULL);



}

