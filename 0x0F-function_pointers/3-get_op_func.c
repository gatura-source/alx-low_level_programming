#include <stdlib.h>
#include <stddef.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - gets operator func
 * @s: operator
 *
 * Return: index to operator function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (s && ops[i].op != NULL)
	{
		if (strcmp((ops[i]).op, s) == 0)
		{
			return ((ops[i]).f);
		}
		i++;
	}
	return (NULL);

	return (0);
}
