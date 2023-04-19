#include "function_pointers.h"
#include <unistd.h>

/**
 * _putchar - outputs char to stdout
 * @c: char input
 * Description: works like std putchar
 * Return: 0 on success, 1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
