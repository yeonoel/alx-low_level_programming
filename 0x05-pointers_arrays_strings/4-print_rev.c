#include "main.h"

/**
 * print_rev - prints the srting, in reverse
 * @s: the char pointer
 */
void print_rev(char *s)
{
char *t;
t = s;
while (*s != '\0')
{
s++;
}
s--;
while (s >= t)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
