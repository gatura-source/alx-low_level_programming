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
