#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: Prints low&upper alphabet using ascii
 * Return: Always 0
 */

int main(void)
{


	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	for (a = 97; a <= 122; a++)
	{
		putchar(a - 32);
	}
	putchar(10);
	return (0);
}

