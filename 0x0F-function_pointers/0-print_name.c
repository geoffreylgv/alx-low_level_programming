#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @name: Name to print
 * @f: Pointer to void function, param char* arg
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
