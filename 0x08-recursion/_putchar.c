#include <unistd.h>
/**
 * _putchar - prints out input to stdout
 * @c: character input
 *
 * Return: 1 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
