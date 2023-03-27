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
	char str[strlen(s)]; /** declaring a string same size as input */

	len = 0;

	while(s[len] != '\0')
	{
		len++;
	}
	while(len >= 0)
	{
		putchar(s[len]);
		len--;
	}
	puts(str);
}
