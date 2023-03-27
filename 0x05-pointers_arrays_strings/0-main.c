#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int n;

	n = 402;

	printf("n = %d\n", n);
	reset_to_98(&n); //passes memory address of n to reset_to_98()
	printf("n = %d\n", n);

	return (0);
}
