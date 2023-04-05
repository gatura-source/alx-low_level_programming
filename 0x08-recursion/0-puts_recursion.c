#include "main.h"
#include <string.h>
/**
 * _puts_recursion - puts but with recursion
 * @s: string input
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*s != '\0')
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}

}
