#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[98];
	char s2[];
	char *ptr;


	s1 = "Hello ";
	s2 = "World!\n";


	printf("%s\n", s1);
        printf("%s\n", s2);

	ptr = _strncat(s1, s2, 1);

	printf("%s", ptr);

	return (0);
}
