#include "main.h"

/**
 * root_check - checks if square withinh natural imits
 * @root: root vaue
 * @limit: natural limit
 *
 * Return:int
 */

int root_check(int root, int limit)
{
	if (root * root < limit)
	{
		return (root_check(root + 1, limit));
	}
	if (root * root > limit)
	{
		return (-1);
	}



	return (root);
}

/**
 * _sqrt_recursion - returns sqrt of a number
 * @n: int input
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	int r_oot;

	r_oot = 1;
	return (root_check(r_oot, n));
}
