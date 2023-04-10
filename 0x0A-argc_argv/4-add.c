#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * ischar - checks if input is char
 * @c: char input
 *
 * Return: false, otherwise true
 */

bool ischar (int c)
{
	int i;
	bool flag;

	flag = 0;

	if (c >= 58)
	{
		for (i = 58; i < 127; i++)
		{
			if (i == c)
			{
				flag = true;
				return (true);
			}
			else
			{
				;
			}
		}
	}
	else
	{
		for (i = 33; i < 48; i++)
		{
			if (i == c)
			{
				flag = true;
				return (flag);
			}
			else
			{
				;
			}
		}
	}


	return (flag);
}
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
	bool f;

	i = 0;


	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			f = ischar(*argv[j]);

			if (f == false)
			{
				i += atoi(argv[j]);
			}
			else if (f == true)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		;
	}

	printf("%d\n", i);

	return (0);
}
