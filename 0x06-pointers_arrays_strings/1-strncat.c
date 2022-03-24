#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the pointer receiver
 * @n: the int characteres to copy
 * @src: the pointer to copy
 * Return: a pointer to the result
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
char *start;

start = dest;
i = 0;

while (*dest != '\0')
{
dest++;
}
while (i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
*dest = '\0';
return (start);
}
