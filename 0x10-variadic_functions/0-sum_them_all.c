#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
 * sum_them_all - a variadic function that adds up all passed args
 * @n: args counter
 * Description: adds up all arguments passed to it
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args_ptr;
	unsigned int i;
	int sum;

	va_start(args_ptr, n);
	sum = 0;
	i = 0;
	if (n == 0)
	{
		return (sum);
	}
	else
	{
		while (i < n)
		{
			sum += va_arg(args_ptr, int);
			i++;
		}
	}
	va_end(args_ptr);
	return (sum);
}
