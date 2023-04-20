#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_strings - prints numbers (variadiv)
 * @separator: separates the strings
 * @n: args counter for variadic functions
 * Description: variadic function that prints out all strings passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args_ptr;
	unsigned int i;
	char *string;

	va_start(args_ptr, n);
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			string = va_arg(args_ptr, char *);
			if (string == NULL)
			{
				printf("nil");
			}
			else
			{
				printf("%s", string);
			}
			if ((i != (n - 1)) && (separator != NULL))
			{
				printf("%s", separator);
			}
		}
	}
	if (n == 0)
	{
		;
	}
	va_end(args_ptr);
	printf("\n");
}
