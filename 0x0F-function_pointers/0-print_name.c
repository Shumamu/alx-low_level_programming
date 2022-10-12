#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name to be printed
 * @f: a pointer function that prints a name
 */


void print_name(char *name, void (*f)(char *))

{

	if (name != NULL && f != NULL)

		f(name);

}
