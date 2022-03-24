#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the pointer receiver
 * @src: the pointer to copy
 * Return: a pointer to the result
 */
char *_strcat(char *dest, char *src)
{
char *start = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
