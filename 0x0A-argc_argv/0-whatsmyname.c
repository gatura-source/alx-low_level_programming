#include <stdio.h>

/**
 * main - entry point
 * @argc: args count
 * @argv: argument vector
 * Description: prints executable name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (--argc == 0)
	{
		printf("%s\n", argv[argc]);
	}

	return (0);
}
