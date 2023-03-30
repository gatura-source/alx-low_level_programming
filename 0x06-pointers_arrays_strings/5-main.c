#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;
	char *ptr_b;
	char str_b[] = "097abcdefghijklmnopqrstuvwxyz\n";

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	ptr_b = string_toupper(str_b);
	printf("%s", ptr_b);
	printf("%s", str_b);

	return (0);
}
