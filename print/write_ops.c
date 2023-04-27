#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * _putchar - our std _putchar
 * @c: char input
 *
 * Return: int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int i_write(va_list args_ptr)
{
	int n;
	int m;
	int nums[10];
	int i;
	int j;

	n = va_arg(args_ptr, int);
	i = 0;
	if (n < 0)
	{
		_putchar('-');
		n = abs(n);
		while (n > 0)
		{
			m = n % 10;
			if (m == 0)
			{
				nums[i] = 0;
			}
			else
			{

				nums[i] = m;
			}
			i++;
			n = n / 10;
		}
		j = i - 1;
		while (j >= 0)
		{
			_putchar(nums[j]);
			j--;
		}

	}
	else
	{
		while (n > 0)
		{
			m = n % 10;
			if (m == 0)
			{
				nums[i] = 0;
			}
			else
			{
				nums[i] = m;
			}
			i++;
			n = n / 10;
		}
	}
}

int d_write(va_list args_ptr)
{

}



		

