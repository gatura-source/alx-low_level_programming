#include <unistd.h>

/**
 * _putchar - putchar with _
 * @i: i i nput
 *
 * Return: 1
 */

int _putchar(char i)
{
	return (write(1, &i, 1));
}
