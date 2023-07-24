#include <stdio.h>

int main(void)
{
  int a = 1234;
  int b = 5678;
  int c = 7777;
  int *p, *q;

  printf("a の番地は %p \n", &a);
  printf("b の番地は %p \n", &b);
  printf("c の番地は %p \n", &c);
  printf("p の番地は %p \n", &p);
  printf("q の番地は %p \n", &q);

  p = &a;
  q = &b;
  c = *p;
  *q = 1972;
  printf("(0) a=%d, b=%d, c=%d, p=%p, q=%p, *p=%d, *q=%d\n", a, b, c, p, q, *p, *q);

  p = &b;
  q = &c;
  a = *q + 10;
  *p = 9999;
  printf("(1) a=%d, b=%d, c=%d, p=%p, q=%p, *p=%d, *q=%d\n", a, b, c, p, q, *p, *q);

  p = q;
  *p = *q / 2;
  printf("(2) a=%d, b=%d, c=%d, p=%p, q=%p, *p=%d, *q=%d\n", a, b, c, p, q, *p, *q);

  return 0;
}

