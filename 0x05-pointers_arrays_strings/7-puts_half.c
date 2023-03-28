#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of string
 * @str: string input
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int len_b;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		len_b = (len - 1) / 2;
	}
	else
	{
		len_b = len / 2;
	}

	do {
		printf("%c", str[len_b]);
		len_b++;
	} while (len_b <= len);
	printf("\n");
}

