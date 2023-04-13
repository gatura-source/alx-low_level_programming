#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/**
 * concat - does the heavy lifting
 * @ptr: pointer
 * @ptrarray: array containing s1 and s2
 * @n: bytes to copy
 * Return: pointer
 */
char *concat(char *ptr, char *ptrarray[], size_t n)
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
			for (j = 0; j < n; j++)
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
 * string_nconcat - adds twos strings up
 * @s1: string one
 * @s2: string two
 * @n: bytes to be copied
 *
 * Return: pointer to new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t p;
	char *ptr;
	char *pt_r;
	size_t i;
	char *ptrarray[2];
	
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}
	{
		;
	}
	p = 0;
	ptrarray[0] = s1;
	ptrarray[1] = s2;
	for (i = 0; i <  2; i++)
	{
		if (ptrarray[i] != NULL && i == 0)
		{
			p += strlen(s1);
		}
		else if (ptrarray[i] != NULL && i == 1)
		{
			p += n;
		}
	}
	ptr = malloc(p + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		pt_r = concat(ptr, ptrarray, n);
	}
	return (pt_r);
}
