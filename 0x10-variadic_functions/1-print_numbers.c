#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers (variadiv)
 * @separator: separates the nums
 * @n: args counter for variadic functions
 * Description: variadic function that prints out all nums passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args_ptr;
	unsigned int i;
	int elem;

	va_start(args_ptr, n);
	if ((separator != NULL) && (n > 0))
	{
		for (i = 0; i < n; i++)
		{
			if (i < (n - 1))
			{
				elem = va_arg(args_ptr, int);
				printf("%d%s ", elem, separator);
			}
			if (i == (n - 1))
			{
				elem = va_arg(args_ptr, int);
				printf("%d", elem);
			}
		}
	}
	if ((separator == NULL) && (n > 0))
	{
		i = 0;
		while (i < n)
		{
			elem = va_arg(args_ptr, int);
			printf("%d ", elem);
			i++;
		}
	}
	if (n == 0)
	{
		;
	}
	va_end(args_ptr);
	printf("\n");
}
