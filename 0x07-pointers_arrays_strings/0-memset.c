#include "main.h"

/**
 * _memset - fills memory  with a constant byte
 * @s: the char pointer
 * @b: the char constate byte
 * @n: the first n bytes of the memory
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
for (i = 0; i < n; i++)
{
s[i] = b;
}
}
return (s);
}
