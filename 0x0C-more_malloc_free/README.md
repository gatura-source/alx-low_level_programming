More tasks on alloc
int *array_range(int min, int max) - creates an array using malloc that contains all ints from min to max(min and max included*

void *_calloc(unsigned int nmemb, unsigned int size)* allocates memory for an array of nmemb elements of size bytes each and returns a pointer to allocted memory. memory set to zero.

 char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated

Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
