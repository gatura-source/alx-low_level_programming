#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		if ( i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}


int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int b[] = {1,2,3,4};
	int c[] = {0};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	print_array(b, sizeof(b) / sizeof(int));
	reverse_array(b, sizeof(b) / sizeof(int));
	print_array(b, sizeof(b) / sizeof(int));
	print_array(c, sizeof(c) / sizeof(int));
	reverse_array(c, sizeof(c) / sizeof(int));
	print_array(c, sizeof(c) / sizeof(int));

	return (0);
}

