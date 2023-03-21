#include "main.h"
/**
 * print_alphabet - prints alphabet in lowercase
 * Description: prints alphabet in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	int b;

	for (b = 97; b < 123; b++)
	{
		_putchar(b);
	}
}
/**
 * main - entry point
 * Description: prints alphabet to stdout
 * Return: always zero
 */
int main (void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
