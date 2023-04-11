#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
 * nul_check - checks if string is null
 * @c: string stnput
 *
 * Returns: false, true otherwise
 */
bool nul_check (char *c)
{
	bool check;

	check = false
	if (c == NULL)
	{
		check = true;
	}
	else
	{
		;
	}

	return (check);
}
/**
 * str_concat - adds twos strings up
 * @s1: string one
 * @s2: string two
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2);
{
	size_t p;
	char *ptr;
	char strs[2];
	size_t i

	strs[0] = s1;
	strs[1] = s2;

	for (i = 0; i < 2; i++)
	{
		if (!nul_check(strs[i]))
		{
			p += strlen(strs[i]);
		}
	}
	ptr = malloc(p + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < 2; i++)
		{
			if (!nul_check(strs[i]))
			{
				for (j = 0; j < strlen(strs[i]); j++)
				{
					ptr[j] = strs[i][j];
				}
			}
			else if(!nul_check(strs[i]) && (i == 1) && (!nul_check(s[i - 1])))
			{
				for (j = 0; j < strlen(strs[i]); j++)
				{
					ptr[strlen + j] = strs[i][j];
				}
			}
		}
	}
	return (ptr)
}

