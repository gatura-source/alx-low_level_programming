#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - returns sum of a & b
 * @a: operand a
 * @b: operand b
 *
 * Return: sum of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns a - b
 * @a: operand a
 * @b: operand b
 *
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns a*b
 * @a: operand a
 * @b: operand b
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns a /  b
 * @a: operand a
 * @b: operand b
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b > 0)
	{
		return (a / b);
	}
	else
	{
		puts("Error");
		exit(100);
	}
}

/**
 * op_mod - modulus operator
 * @a: operand a
 * @b: operand b
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b > 0)
	{
		return (a % b);
	}
	else
	{
		puts("Error");
		exit(100);
	}
}
