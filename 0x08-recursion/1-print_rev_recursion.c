#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string input
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	size_t len;

	len = strlen(s);

	if (len > 0)
	{
		_putchar(s[len]);
		len--;
		_print_rev_recursion(&(s[len]));
	}
}
