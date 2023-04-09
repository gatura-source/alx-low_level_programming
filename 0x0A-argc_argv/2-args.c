#include <stdio.h>

/**
 * main - entry point
 * @argc: args count
 * @argv: args vector
 * Description: prints out each args passed
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
