#include <unistd.h>

/**
 * _putchar - like putchar
 * @ch: character input
 *
 * Return: 1
 */

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
