#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
int get_endianness(void);
int _putchar(char);
void print_binary(unsigned long int);
unsigned int binary_to_uint(const char *);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *n, unsigned int);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int, unsigned long int);
#endif
