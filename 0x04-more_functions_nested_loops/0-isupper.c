#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks character input if uppercase
 * Description: as said above
 * Return: 1 if uppercase o otherwise
 */

int _uppercase(int c);
{
	int r;

	if (c >= 65 && c <= 90)
	{
		r = 1;
	}
	else if (c >= 97 && c<= 122)
	{
		r = 0;
	}
	else
	{
		r = 0;
	}

	return (r);
}
