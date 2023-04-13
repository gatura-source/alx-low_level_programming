#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * concat - does the real concatenation
 * @ptr: pointer to mem of concatenation
 * @ptrarray: array cont. strings
 * @n: bytes to copy
 *
 * Return: pointer
 */
char *concat(char *ptr, char *ptrarray[], size_t n)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; i < 2; i++)
	{
		if (i == 0)
		{
			for (j = 0; j < strlen(ptrarray[i]); j++)
			{
				ptr[j] = (ptrarray[i])[j];
			}
		}
		if (i == 1)
		{
			for (j = 0; j < n; j++)
			{
				ptr[strlen(ptrarray[i - 1]) + j] = (ptrarray[i])[j];
			}
		}
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (ptr);
	}
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
	char *ptr;
	size_t len_1;
	size_t len_2;
	char *ptr_2;
	char *ptrarray[2];

	len_1 = 0;
	len_2 = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len_1] != '\0')
	{
		len_1++;
	}
	while (s2[len_2] != '\0')
	{
		len_2++;
	}
	if (n >= len_2)
	{
		n = len_2;
	}
	ptr = malloc(n + 1 + len_1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptrarray[0] = s1;
	ptrarray[1] = s2;
	ptr_2 = concat(ptr, ptrarray, n);
	return (ptr_2);
}
