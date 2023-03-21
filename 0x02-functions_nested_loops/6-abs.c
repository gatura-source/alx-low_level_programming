#include "main.h"
/**
 * _abs - RTFC
 * @num: func input
 * Description: RTFC
 * Return: 0
 */
int _abs(int num)
{
	int r;

	if (num >= 0)
	{
		r = num;
	}
	else
	{
		r = ((num) * (-1));
	}
	return (r);
}
