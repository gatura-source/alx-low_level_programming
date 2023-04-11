#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - adds twos strings up
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	size_t p;
	size_t i;
	char *ptr;

	p = 0;

	if (s1 == NULL)
	{
		p += 0;
	}
	else if (s2 == NULL)
	{
		p += 0;
	}
	else
	{
		p += strlen(s1); 
		p += strlen(s2);
	}

	ptr = malloc(p + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			ptr[i] = s1[i];
		}
		for (i = 0; s2[i] != '\0'; i++)
		{
			ptr[i + strlen(s1)] = s2[i];
		}

		return (ptr);
	}

}


