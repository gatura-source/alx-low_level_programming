#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - duplicates a string
 * @str: string duplicated
 *
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	size_t i;
	char *ptr;
	size_t j;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = strlen(str);
		ptr = malloc(i + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			for (j = 0; str[j] != '\0'; j++)
			{
				ptr[j] = str[j];
			}
		}
	}

	if (strcmp(ptr, str) == 0)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}




