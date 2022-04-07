#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory
 * @b: unsigned int
 * Return: pointer to the allocated memory
 **/
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(sizeof(unsigned int) * b);
if (p == NULL)
{
exit(98);
}
return (p);
}
