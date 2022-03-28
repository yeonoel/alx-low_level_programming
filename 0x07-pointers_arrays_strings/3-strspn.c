#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: the char pointer the principale strings
 * @accept: the char chracteres search
 * Return: the number of bytes in initial segment 
 */
unsigned int _strspn(char *s, char *accept)
{
  int n, i, j, flag;
  n = 0;
  for (i = 0; s[i] != '\0'; i++)
    {
      flag = 0;

      for(j = 0; accept[j] != '\0'; j++ )
	{
	  if (s[i] == accept[j])
	    {
	      n++;
	      flag = 1;
	    }
	}
      if (flag == 0)
	{
	  return (n);
	}
      
    }
  return (0);
}
