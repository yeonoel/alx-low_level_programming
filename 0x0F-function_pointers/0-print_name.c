#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - name
 * @name: the char name
 * @f: the function pointer
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
