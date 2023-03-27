#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string input
 *
 * Return: void
 */
void rev_string(char *s)
{

	int len;
	int len_b;
	int count;
	int count_2;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	char b[len];

	count_2 = len - 1;

	for (count = 0; count < len; count++)
	{
		b[count] = s[count_2];
		count_2--;
	}
	b[count] = '\0';

	printf("%s :: %s", s, b);
	char *temp[len] = &b;
}
