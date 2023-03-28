#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string input
 *
 * Return: void
 */
void rev_string(char *s)
{

	int len;
	int count;
	char *ptr_a;
	char *ptr_b;
	char temp;


	ptr_a = s;

	len = strlen(s);

	ptr_b = s + len - 1;


	for (count = 0; count < (len - 1) / 2; count++)
	{
		temp = *ptr_b;
		*ptr_b = *ptr_a;
		*ptr_a = temp;

		ptr_a++;
		ptr_b--;
	}






}
