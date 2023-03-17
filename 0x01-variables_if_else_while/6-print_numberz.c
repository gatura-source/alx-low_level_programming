#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints out 0-9
 * Return: 0 always
 */

int main(void)
{

	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
