#include <stdio.h>
#define SIZE 5

int add( int a, int *b, int c[], int *d ){

  int i;

  a++;
  (*b)++;

  for( i=0; i < SIZE; i++ )
    c[i]++;

  for( i=0; i < SIZE; i++ )
    (*(d+i))++;

  return a;
}

int main(void)
{
  int i;
  int a, b, e;
  int c[SIZE], d[SIZE];

  a = 10;
  b = 10;
  for( i=0; i < SIZE; i++ ){
    c[i] = i;
    d[i] = i;
  }
  /* c[0] = 0, c[1] = 1, ..., c[4] = 4; */
  /* d[0] = 0, d[1] = 1, ..., d[4] = 4; */


  /* 以下で a, b, c[], d[] を表示 */
  printf(" a = %d, b = %d \n", a, b );
  for( i=0; i < SIZE; i++ )
    printf(" c[%d] = %d, d[%d] = %d \n", i, c[i], i, d[i] );


  e = add( a, &b, c, d );


  /* 以下で a, b, e, c[], d[] を表示 */
  printf("\n");
  printf(" a = %d, b = %d, e = %d \n", a, b, e );
  for( i=0; i < SIZE; i++ )
    printf(" c[%d] = %d, d[%d] = %d \n", i, c[i], i, d[i] );

  return 0;
}

