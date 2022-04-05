#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first char s1
 * @s2: the second char s2
 * Return: the pointer to the newly allocated
 */
char *str_concat(char *s1, char *s2)
{
char *p;
int len1, len2, len, a, i;
len1 = len2 = len = a = i = 0;
while (s1[len1] != '\0')
{
len1++;
}
while (s2[len2] != '\0')
{
len2++;
}
len = len1 + len2;
p = malloc((sizeof(char) * len) +1);
if (p == NULL)
{
return (NULL);
}
else
{
while (a < len1)
{
p[a] = s1[a];
a++;
}
while (a < len)
{
p[a] = s2[i];
i++;
a++;
}
}
p[a] = '\0';
return (p);
}
