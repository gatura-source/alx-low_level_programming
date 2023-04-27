#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_int - prints int
 * @i: int passed
 *
 * Return: void
 */

void print_int(int *i)
{
	printf("%d", *i);
}

/**
 * print_char - prints characters
 * @c: char passed
 *
 * Return: void
 */

void print_char(char *c)
{
	putchar(*c);
}

/**
 * print_str - prints strings
 * @str: str passed
 *
 * Return: void
 */
void print_str(char *s)
{
	printf("%s", *s);
}

/**
 * print_float - prints floats
 * @f: float passed
 *
 * Return: void
 */
void print_float(float *f)
{
	printf("%f", *f);
}

/**
 * print_all - prints anything
 * @format: format specifies how a input is printed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	print_t printers[] = {
		{"s", print_str},
		{"f", print_float},
		{"c", print_char},
		{"i", print_int}
	};
	int i;
	va_list args_ptr;
	char f;
	void (*printer)();

	va_start(args_ptr, (int *)strlen(format));
	i = 0;
	if (format != NULL)
	{
		while (*format != '\0')
		{
			f = format;
			if (strcmp(printers[i].formatter, f) == 0)
			{
				printer = printers[i].f;
				printer(va_arg(args_ptr, void));
			}
			format++;
			i++;
		}
	}
	va_end(args_ptr);
}

