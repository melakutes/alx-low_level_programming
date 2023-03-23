#ifndef FUNC_PTR
#define FUNC_PTR
/* Headers for the 0x0F-fuction_pointers project */
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif
