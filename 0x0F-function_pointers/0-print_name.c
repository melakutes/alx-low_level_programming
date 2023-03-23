#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: name to be printed
 * @f: callback function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(1);
	f(name);
}
