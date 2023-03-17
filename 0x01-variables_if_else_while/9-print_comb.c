#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: combinations
 * Return: 0 Always
 */
int main(void)
{

	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);

}
