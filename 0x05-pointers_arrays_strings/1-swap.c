#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps memory addresses for two ints
 * @a: input a
 * @b: input b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a; /* temporarily store pointer *a in temp */
	*a = *b;  /* swap *a to pointer *b */
	*b = temp; /* swap *b to temp now */
}
