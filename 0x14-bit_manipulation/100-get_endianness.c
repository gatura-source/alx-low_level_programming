#include "main.h"

/**
 * get_endianness - as nameed
 *
 *
 * Return:  if big endian, 0 if little endian
 */

int get_endianness(void)
{
	int num;
	char *ptr;

	num = 1;
	ptr = (char *)&num;
	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
