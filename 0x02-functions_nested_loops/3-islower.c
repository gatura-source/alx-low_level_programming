#include "main.h"
/**
 * _islower - like std does
 * Description: checks for lowercase
 * Return: 1 for lowcase, 0 otherwise
 */
int _islower(int c)
{
	if (c < 97 && c >= 65)
	{
		return 0;
	}
	else if (c >= 97 && c <= 122)
	{
		return 1;
	}
}
