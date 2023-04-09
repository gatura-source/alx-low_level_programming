#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: args count
 * @argv: argument vector
 * Description: prints number of args passed to a program
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}

	return (0);
}
