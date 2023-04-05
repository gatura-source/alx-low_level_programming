#include "main.h"

/**
 * _strlen_recursion - returns string length
 * @s: string input
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;


	if (*s != '\0')
	{
		s++;
		i = 1 + _strlen_recursion(s);
	}

	return (i);
}
