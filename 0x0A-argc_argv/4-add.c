#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: args count
 * @argv: args vector
 * Description: adds all pos+ args passed
 * Return: 0 on success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int j;

	i = 0;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			if (atol(argv[j]) > 0)
			{
				i += atol(argv[j]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", i);

	return (0);
}
