#include <stdio.h>

/**
 * main - entry point
 * @argc: args count
 * @argv: args vector
 * Description: multiplies first 2 args passed via terminal
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int r;
	int a;
	int b;

	if (argc > 2)
	{
		a = *argv[1] - '0';
		b = *argv[2] - '0';
		r = a * b;
		printf("%d\n", r);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
