#include "main.h"

/**
 * get_endianness - gets endianness of the machine
 *
 *
 * Return: int (1 if little endian) 
 */

int get_endianness(void)
{
	unsigned int i;
	unsigned char *p;

	p = (unsigned char *)&i;
	if (*p == 0x78)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
