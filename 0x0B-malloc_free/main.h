#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *concat(char *ptr, char *ptrarray[]);
int **alloc_grid(int width, int height);
#endif
