
/**
 * leet - encodes a string int 1337
 * @n: the char  pointer of the string
 * Return: the pointer to the new string
 */
char *leet(char *n)
{
int i, j;
char *a = "aAeEoOtTlL";
char *b = "4433007711";
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == a[j])
{
n[i] = b[j];
}
}
}
return (n);
}
