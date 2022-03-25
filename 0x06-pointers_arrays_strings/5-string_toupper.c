/**
 * string_toupper - changes all lowercase letters  of string
 * @n: the int pointer of string
 * Return: the point of the string result
 */
char *string_toupper(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >='a' && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
}
return (n);
}
