
/**
 * _strcmp - compares two strings
 * @s1: first caracteres to compare
 * @s2: the second caracteres to compare
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
if (*s1 == *s2)
{
return (0);
}

else
{
return (*s1 - *s2);
}
}