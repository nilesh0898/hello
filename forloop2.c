#include <stdio.h>

int main ()
{
  int n;
  int num;

  printf ("table of the given num is : ");

  scanf ("%d", &num);

  for (n = 1; n < 21; n++)
    {
      printf ("%d \n", n * num);
    }



  return 0;
}