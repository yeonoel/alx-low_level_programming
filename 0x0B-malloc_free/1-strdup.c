#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the char pointer of the string
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
int len, a;
char *p;
a = 0;
if (str == NULL)
return (NULL);
len = 0;
while (str[len] != '\0')
{
len++;
}

p = malloc((sizeof(char) * len) +1);

if (p == NULL)
{
return (NULL);
}
else
{
while (a < len)
{
p[a] = str[a];
a++;
}
p[a] = '\0';
}
return (p);
}
