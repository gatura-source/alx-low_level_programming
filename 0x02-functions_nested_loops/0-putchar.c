#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: character to print
 * Description: prints out charcter to stdout
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - entry point
 * Description: as seen above
 * Return: 1 always
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}
