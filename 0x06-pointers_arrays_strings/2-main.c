#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[98];
	char *ptr;
	int i;

	for (i = 0; i < 98; i++)
	{
		s1[i] = '*';
	}
	s1[i] = '\0';
	printf("%s\n", s1);
	ptr = _strncpy(s1, "First, solve the problem. Then write your code\n", 5);
	printf("%s\n", s1);
	printf("%s\n", ptr);

	ptr = _strncpy(s1, "First, solve the problem. Then write your code\n", 90);
	printf("%s", s1);
	printf("%s", ptr);

	for (i = 0; i < 98; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", s1[i]);
	}
	printf("\n");

	for (i = 0; i < 98; i++)
	{
		printf("%d ", s1[i]);
	}
	printf("\n");

	return (0);
}
