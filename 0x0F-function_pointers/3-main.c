#include "3-calc.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * main - entry point
 * @argc: args counter
 * @argv: args vector
 *
 * Return: some number yow
 */

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int (*func)(int, int);

		func = get_op_func(argv[2]);
		if (func != NULL)
		{
			printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
