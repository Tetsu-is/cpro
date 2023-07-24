#include <stdio.h>       // 実際に動くswap関数の例

void sort2(int *a, int *b);

int main(void)
{
    int x, y;

    printf("x -->");
    scanf("%d",&x);
    printf("y -->");
    scanf("%d",&y);
    sort2(&x, &y);        // 関数の呼び出し：xのアドレスとyのアドレスを指定
    printf("x=%d\ty=%d\n", x, y); // 印字

    return 0;
}

void sort2(int *a, int *b)
{
  int temp;
  if(*a > *b){
    temp = *a;
    *a = *b;
    *b = temp;
  }
}