#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: args count
 * @argv: args vector
 * Description: change make
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int div[] = {25, 10, 5, 2, 1};
	int i;
	int j;
	int a;

	j = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		if (a < 0)
		{
			printf("%d\n", 0);
			return (1);
		}
		else if (a > 0)
		{
			while (a > 0)
			{
				for (i = 0; i < 5; i++)
				{
					if ((a >= div[i]) && (a > 0))
					{
						j += 1;
						break;

					}
				}
				a -= div[i];
			}
		}
	}
	printf("%d\n", j);
	return (0);
}
