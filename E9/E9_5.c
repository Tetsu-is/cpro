#include <stdio.h>

int main( void )
{
  int i;
  int a[4];
  a[0] = 100;
  a[1] = 101;
  a[2] = 102;
  a[3] = 103;

  // i のアドレス（ &i ）を書式 %p で表示する printf 文を書く
  printf("i --> %p\n", &i);
  // a[0]～a[3] のアドレス（ &a[0], &a[1], &a[2], &a[3] ）を書式 %p で表示する printf 文を書く
  printf("a[0] --> %p\n", &a[0]);
  printf("a[1] --> %p\n", &a[1]);
  printf("a[2] --> %p\n", &a[2]);
  printf("a[3] --> %p\n", &a[3]);
  // a, a+1, a+2, a+3 を書式 %p で表示する printf 文を書く
  printf("a --> %p\n", a);
  printf("a+1 --> %p\n", a+1);
  printf("a+2 --> %p\n", a+2);
  printf("a+3 --> %p\n", a+3);

  printf("\n");

  // i の値を書式 %d で表示する printf 文を書く
  printf("i --> %d\n", i);
  // a[0]～a[3] の値（ a[0], a[1], a[2], a[3] ）を書式 %d で表示する printf 文を書く
  printf("a[0] --> %d\n", a[0]);
  printf("a[1] --> %d\n", a[1]);
  printf("a[2] --> %d\n", a[2]);
  printf("a[3] --> %d\n", a[3]);
  // *a, *(a+1), *(a+2), *(a+3) を書式 %d で表示する printf 文を書く
  printf("*a --> %d\n", *a);
  printf("*(a+1) --> %d\n", *(a+1));
  printf("*(a+2) --> %d\n", *(a+2));
  printf("*(a+3) --> %d\n", *(a+3));

  return 0;
}