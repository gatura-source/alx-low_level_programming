#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints str in reverse
 * @s: str input
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;
	int count;
	int end;
	char str[strlen(s)];

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}


	end = len - 1;

	for (count = 0; count < len; count++)
	{
		str[count] = s[end];
		end--;
	}
	str[count] = '\0';
	puts(str);
}
