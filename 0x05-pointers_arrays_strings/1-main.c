#include "main.h"
#include <stdio.h>

int main(void)
{
	int a = 98;
	int b = 402;

	printf("a -- %d :: b -- %d", a, b);

	swap_int(&a, &b);

	printf("a -- %d :: b -- %d", a, b);

	return (0);

}
