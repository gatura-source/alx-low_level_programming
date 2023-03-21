#include "main.h"
/**
 * print_alphabet_x10 - check what code does
 * Description: read above
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a <= 10; a++)
	{
		for (b = 97; b <= 122; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
