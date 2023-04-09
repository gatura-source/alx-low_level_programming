#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * ischar - checks if input is char
 * @c: func input
 *
 * Returns: false, otherwise true
 */

bool ischar (int c)
{
	bool f;

	int i;

	f = false;

	for (i = 58; i < 127; i++)
	{
		if (i == c)
		{
			f = true;
			return (f);
		}
		else
		{
			;
		}
	}

	return (f);
}

/**
 * main - entry point
 * @argc: args count
 * @argv: args vector
 * Description: change make
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	bool f;
	int div[5];
	int i;
	int j;
	int a;

	j = 0;

	div[0] = 25;
	div[1] = 10;
	div[2] = 5;
	div[3] = 2;
	div[4] = 1;

	f = ischar (*argv[1]);
	printf("this is args count %d\n", argc);

	if (argc && argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2)
	{
		a = atoi(argv[1]);

		if (a < 0)
		{
			printf("%d\n", 0);
			return (1);
		}


		else if (f == false && a > 0)
		{
			while (a > 0)
			{
				for (i = 0; i < 5; i++)
				{
					if ((a >= div[i]) && (a > 0))
					{
						j += 1;
						printf("New a value is %d\n", a);
						break;

					}
				
				}
				a -= div[i];
			}
		}
		else
		{
			printf("Error\n");
		}
	}

	printf("%d\n", j);

	return (0);
}
