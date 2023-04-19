#include "main.h"

/**
 * print_name - passes a name to a function pointer
 * @name: name
 * @f: function pointer
 * Description: prints out a name using a function pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *));
{
	f(name);
}
