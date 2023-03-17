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

	for(a = 48; a < 58; a++)
	{
		if (a < 57)
		{
			putchar(a);
			putchar(44);
			putchar(32);
		}
		else if (a == 57)
		{
			putchar(a);
		}
	}
	putchar(10);
	return (0);

}
