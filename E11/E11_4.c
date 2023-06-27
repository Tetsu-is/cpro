#include <stdio.h>

struct point {
  int x;
  int y;
};

void my_func(struct point p[])
{
  int i;

  for( i = 0; i < 2; i++ )
  {
    p[i].x += 5;
    p[i].y += 5;
  }
}

int main(void)
{
  struct point p[2];

  p[0].x = 1;
  p[0].y = 2;

  p[1].x = 3;
  p[1].y = 4;

  my_func( p );

  printf("p[0].x = %d,   p[0].y = %d\n", p[0].x, p[0].y);
  printf("p[1].x = %d,   p[1].y = %d\n", p[1].x, p[1].y);

  return 0;
}