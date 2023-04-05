#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - prints string in reveerse
 * @s: string input
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i;

	i = strlen(s);

	if (*s != '\0')
	{
		_putchar(s[i]);
		i = i - 2;
		s++;
		_print_rev_recursion(s);
	}
}
