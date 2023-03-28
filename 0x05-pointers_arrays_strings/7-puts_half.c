#include "main.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

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
	char count_a[10000];
	int count;

	len = 0;
	count = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	/*
	 * printf("%d\n", len_c);
	printf("%d\n", len);
	*/

	if (len % 2 != 0)
	{
		len_b = round((len - 1) / 2) + 1;
	}
	else if (len % 2 == 0)
	{
		len_b = len / 2;
	}


	do {
		count_a[count] = str[len_b];
		len_b++;
		count++;
	} while (len_b <= len);
	puts(count_a);
}

