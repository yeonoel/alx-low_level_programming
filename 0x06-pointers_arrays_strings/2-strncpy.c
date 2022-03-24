#include "main.h"

/**
 * _strncpy - copies the string
 * @dest: the char destination
 * @src: the char sources
 * @n: the int number
 * Return: destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
