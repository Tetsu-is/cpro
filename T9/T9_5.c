#include <stdio.h>

int main (void)
{
   int a = 1234;
   int x;
   int *p;

   p = &a;

   x = *p + 4321;

   printf("%d %d \n", *p, x);

   return 0;
}