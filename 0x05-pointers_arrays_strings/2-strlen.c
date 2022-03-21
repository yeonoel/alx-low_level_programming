#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the char pointer
 * Return: x the len
 */
int _strlen(char *s)
{
int x;
x = 0;
while (*s != '\0')
{
s++;
x++;
}
return (x);
}
