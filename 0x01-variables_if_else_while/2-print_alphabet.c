#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints out alphabet to stdout using ascii
 * Return: 0
 */

int main(void)
{
	int c;

	for  (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}

