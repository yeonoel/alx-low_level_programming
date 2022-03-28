#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: the char pointer destination
 * @src: the pointer source to copier
 * @n: copies n bytes from memory src to dest
 * Return: char pointer of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}
