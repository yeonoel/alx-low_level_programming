#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: the int to check
 * Return: 1 if c is a digit
 * return 0 otherwise
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}