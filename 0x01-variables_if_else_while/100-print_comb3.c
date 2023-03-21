#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: combination using putchar
 * Return: 0 always
 */
int main(void)
{
	int a;
	int b;

	for ( a = 48; a < 58; a++)
	{
		for ( b = 49; b < 58; a++)
		{
			if ( a == b || b > a)
			;
			else
			{
				putchar(a);
				putchar(b);
				if ( b < 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		
	}
	}
	putchar(10);
	return (0);
}
