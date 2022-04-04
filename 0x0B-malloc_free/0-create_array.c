#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * create_array - creates array of char
 * @size: the unsigned int size oh array
 * @c: the char chracteres for initialisatin
 * Return: NULL if size = 0
 * return a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;
p = malloc(sizeof(*p) * size);

if (size == 0)
{
return (NULL);
}
else if (p == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < size; i++)
{
p[i] = c;
}
}
return (p);
}
