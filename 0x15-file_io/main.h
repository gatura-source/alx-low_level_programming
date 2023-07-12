#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <stddef.h>
ssize_t read_textfile(const char *, size_t);
void *err_malloc(size_t);
int create_file(const char *, char *);
#endif
