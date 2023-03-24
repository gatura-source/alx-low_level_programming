#include <stdio.h>
#include <stdlib.h>
/**
 * main - fizz buzz
 *
 * Return: void
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 15 != 0)
		{
			printf("Fizz");
			putchar(32);
		}
		else if (a % 3 == 0 && a % 15 == 0)
		{
			printf("FizzBuzz");
			putchar(32);
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			putchar(32);
		}
		else
		{
			printf("%d", a);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
