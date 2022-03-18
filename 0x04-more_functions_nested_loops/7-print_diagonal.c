#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: the number of timesth character \ should be print
 */
void  print_diagonal(int n)
{
  int t, x;
 t = 0;
    if (n <= 0)
	{
	  _putchar('\n');
	}
      else
	{
	  while (n > 0)
	    {
	      
	      x = t;
	      while (t > 0)
		{
		  _putchar(' ');
		  t--;
		}
	      _putchar('\\');
	      _putchar('\n');
	      t = ++x;
	      n--;
	    }
	}
}
