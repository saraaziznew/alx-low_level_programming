#include "function_pointers.h"
/**
 * print_name - function print the name
 * @name:string to print
 * @f: string to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
