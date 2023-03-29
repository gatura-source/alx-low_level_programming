#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char s1[] = "hell";
	char s2[] = "hello";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", strcmp(s2, s1));

	return (0);
}
