#ifndef FILEIO_H
#define FILEIO_H
#include <stdlib.h>
/**
 * err_malloc - Error-checked malloc
 * @memsize: Dynamic mem requested
 *
 * Return: ptr or NULL
 */
void *e_malloc(unsigned int memsize);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
