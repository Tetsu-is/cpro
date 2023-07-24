#include <stdio.h>

void sub(int *x, int *y)
{
  *x = *x * *y;
  *y = *y * *x;
}

int main(void)
{
  int a = 10;
  int b = 20;

  printf("before: a=%d, b=%d\n", a, b);

  sub(&a, &b);

  printf("after:  a=%d, b=%d\n", a, b);

  return 0;
}