#include <unistd.h>
/**
 * _putchar - prints character to stdout
 * @c: character input
 * Description: prints char to stdout
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - prints alphabet to stdout
 * Description: as seen above
 * Return: 1 always
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		_putchar(a);
	}
}
