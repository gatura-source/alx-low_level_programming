#include "main.h"
/**
 * _islower - like std does
 * @c: func input
 * Description: checks for lowercase
 * Return: 1 for lowcase, 0 otherwise
 */
int _islower(int c)
{
	int r;

	if (c < 97 && c >= 65)
	{
		r = 0;
	}
	else if (c >= 97 && c <= 122)
	{
		r = 1;
	}
	else
	{
		r = 0;
	}
	return (r);
}
