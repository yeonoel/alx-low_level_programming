/**
 * reverse_array - reverse the content of an array of integers
 * @a: the pointer of the array
 * @n: the numbers of elments
 */
void reverse_array(int *a, int n)
{
int i, ch;
ch = 0;

for (i = 0; i < n / 2; i++)
{
ch = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = ch;
}
}
