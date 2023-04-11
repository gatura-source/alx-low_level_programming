#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates string with chars
 * @dest: destination input
 * @src: source input
 * @n: number of characters to be copied
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len;
	int i;

	dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';


	return (dest);
}
