#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: prints alphabet except q and e(Ascii)
 * Return: 0(always)
 */

int main(void)
{
	int a;

	for (a = 97; a  <= 122; a++)
	{
		if (a == 101 || a == 113)
		;
		else
		{
			putchar(a);
		}
	}
	putchar(10);
	return (0);
}
