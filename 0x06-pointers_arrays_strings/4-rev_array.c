#include "main.h"
/**
 * reverse_array - reversees array contents
 * @a: array input
 * @n: number of eleements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (j = 0; j < n / 2; j++)
	{
		i = a[j];
		a[i] = a[n - 1 - j];
		a[n - 1 - i] = i;
	}

}


