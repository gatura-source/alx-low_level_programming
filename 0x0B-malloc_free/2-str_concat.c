#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
 * concat - does the heavy lifting
 * @ptr: pointer
 * @ptrarray: array containing s1 and s2
 *
 * Return: pointer
 */
char *concat(char *ptr, char *ptrarray[])
{
	size_t i;
	size_t j;

	for (i = 0; i < 2; i++)
	{
		if (ptrarray[i] == NULL)
		{
			;
		}
		else if ((i == 0) && (ptrarray[i] != NULL))
		{
			for (j = 0; j < strlen(ptrarray[i]); j++)
			{
				ptr[j] = (ptrarray[i])[j];
			}
		}
		else if ((i == 1) && (ptrarray[i] != NULL) && (ptrarray[i - 1] != NULL))
		{
			for (j = 0; j < strlen(ptrarray[i]); j++)
			{
				ptr[j + strlen(ptrarray[i - 1])] = (ptrarray[i])[j];
			}
		}
		else
		{
			for (j = 0; j < strlen(ptrarray[i]); j++)
			{
				ptr[j] = (ptrarray[i])[j];
			}
		}
	}
	return (ptr);
}

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
	char *ptr;
	char *pt_r;
	size_t i;
	char *ptrarray[2];

	p = 0;
	ptrarray[0] = s1;
	ptrarray[1] = s2;
	for (i = 0; i <  2; i++)
	{
		if (ptrarray[i] == NULL)
		{
			p += 0;
		}
		else
		{
			p += strlen(ptrarray[i]);
		}
	}
	ptr = malloc(p + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		pt_r = concat(ptr, ptrarray);
	}
	return (pt_r);
}
