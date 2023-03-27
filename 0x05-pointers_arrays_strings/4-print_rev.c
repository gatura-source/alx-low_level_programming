#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints str in reverse
 * @s: str input
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	char str[strlen(s)];

	while (s[len] != '\0')
	{
		len++;
	}
	int count;


	int end = len - 1;

	for (count = 0; count < len; count++)
	{
		str[count] = s[end];
		end--;
	}
	str[count] = '\0';
	puts(str);
}
