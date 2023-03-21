#include "main.h"
/**
 * _isalpha - as std does
 * @c: fnc input
 * Description: read codde
 * Return: 1 for alpha 0 otherwise
 */
int _isalpha(int c)
{
	int r;
	if (c >= 65 && c <= 90)
	{
		r = 1;
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
