#include <stdio.h>
/*
 *
 * Program prints size of various data types used in C
 *
 */
int main (void)
{

	int a; long int b; long long int c; char d; float f;
	printf("Size of a char is :: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int is :: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an long int is :: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int is:: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a floating point variable is:: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
