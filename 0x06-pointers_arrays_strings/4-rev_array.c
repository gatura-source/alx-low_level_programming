#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reversees array contents
 * @a: array input
 * @n: number of eleements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int j;
	int i;

	for (j = 0; j < n / 2; j++)
	{
		i = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = i;
	}

}


