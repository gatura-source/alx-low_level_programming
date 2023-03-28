#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints only even indexes
 * @str: input string
 *
 * Return: void
 */

void puts2(char *str)
{
	int len;
	int count;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (count = 0; count < len; count++)
	{
		if (count % 2 == 0)
		{
			printf("%c", str[count]);
		}
	}
	putchar('\n');
}
