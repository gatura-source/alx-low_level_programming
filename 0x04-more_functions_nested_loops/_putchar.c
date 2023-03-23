#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: func char input
 *
 * Return: 0 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
