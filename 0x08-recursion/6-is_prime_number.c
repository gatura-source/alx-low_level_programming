#include "main.h"
/**
 * is_prime_check - checks if a number is prime
 * @a: another int
 * @n: int input
 *
 * Return: 0 or 1
 */

int is_prime_check(int a,int n)
{
	if (a == 1)
	{
		return (1);
	}
	else
	{
		if (n % a == 0)
		{
			return (0);
		}
		else
		{
			return is_prime_check(a + 1, n);
		}
	}

}
/**
 * is_prime_number - checks if a number is prime
 * @n: int input
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int h;

	h = is_prime_check(2, n);

	return (h);
}

	
