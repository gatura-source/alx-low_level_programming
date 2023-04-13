#include "main.h"
#include <stdlib.h>
#include <string.h>
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
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_1 = strlen(s1);
	len_2 = strlen(s2);
	if (n >= len_2)
	{
		n = len_2;
	}
	ptr = malloc(n + 1 + len_1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_1; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		ptr[len_1 + i] = s2[i];
	}
	return (ptr);
}
