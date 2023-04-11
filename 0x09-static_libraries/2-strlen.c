#include "main.h"
#include <stdio.h>
/**
 * _strlen - Returns length of a string
 * @s: func input
 *
 * Return: strlen
 */

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

