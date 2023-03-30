#include "main.h"
#include <string.h>

/**
 * _strncpy - works exacty like strncpy
 * @dest: dest input
 * @src: src input
 * @n: chars to be copied
 *
 * Return: pointers to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
