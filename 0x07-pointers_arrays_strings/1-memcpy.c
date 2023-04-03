#include "main.h"

/**
 * _memcpy - copies blocks of data from dest to src
 * @dest: destination
 * @src: source
 * @n: data copied how many times
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
		src[a] = dest[a];
		a++;
	}

	return (dest);
}
