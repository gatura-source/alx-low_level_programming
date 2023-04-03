#include "main.h"

/**
 * _memset - fills first n with a constatnt byte
 * @s: pointer to memory part filled with a const byte
 * @b: constant byte
 * @n: how many times the filling hapens
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
