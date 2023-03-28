#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array itsm ina single line
 * @a: aarray iput
 * @n: items in array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int c;


	for (c = 0; c <= n; c++)
	{
		if (c >= 0 && c!= n)
		{
			printf("%d", a[c]);
			putchar(44);
			putchar(32);
		}
		else if (c == n)
		{
			printf("%d", a[c]);
		}
	}
	putchar('\n');
}
 
