#ifndef VFUNCTIONS_H
#define VFUNCTIONS_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char  * const  format, ...);
void print_char(char *c);
void print_int(int *i);
void print_float(float *f);
void print_str(char *s);

typedef struct printers
{
	char *formatter;
	void (*f)();
}print_t;
#endif
