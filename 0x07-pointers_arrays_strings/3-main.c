#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;
    unsigned int a;

    n = _strspn(s, f);
    printf("%u\n", n);
    a = strspn(s, f);
    printf("%u\n", a);
    return (0);
}
