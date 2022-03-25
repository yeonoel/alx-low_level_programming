#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @n: the char pointer
 * Return: the pointer to the result
 */
char *cap_string(char *n)
{
int i;

for (i = 0; n[i] != '\0'; i++)
{
if ((i == 0) && n[i] >= 'a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
else if ((n[i] == '?' || n[i] == ',' || n[i] == ';' || n[i] == '.' || n[i] == '"' || n[i] == '?' || n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}' || n[i] == ' ' || n[i] == '\n' || n[i] == '\t') && n[i + 1] >= 'a' && n[i + 1] <= 'z')
{
n[i + 1] = n[i + 1] - 32;
}
}
return (n);
}
