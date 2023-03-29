#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: string input 1
 * @src: string input 2
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_len;
	size_t i;
	size_t src_len;

	dest_len = strlen(dest);
	src_len = strlen(src);

	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	
	return (dest);
}

