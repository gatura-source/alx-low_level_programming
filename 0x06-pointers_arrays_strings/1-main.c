#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;


	printf("%s\n", s1);
        printf("%s\n", s2);

	ptr = _strncat(s1, s2, 1);

	printf("%s", ptr);

	ptr = _strncat(s1, s2, 1024);
	printf("%s", ptr);

	return (0);
}
