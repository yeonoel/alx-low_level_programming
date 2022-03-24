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
int len, i;
len = 0;
while (dest[len] != '\0')
{
len++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
