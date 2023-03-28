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
	char two[10000];
	int count;
	int begin;

	while (s[len] != '\0')
	{
		len++;
	}

	count = len - 1;

	for (begin = 0; begin < len; begin++)
	{
		two[begin] = s[count];
		count--;
	}
	two[begin] = '\0';

	puts(two);
}
