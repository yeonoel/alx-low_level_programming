#include <stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: the int to check
 *Return: 1 if c is uppercase
 * return 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
