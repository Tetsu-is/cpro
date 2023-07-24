#include <stdio.h>

void s_to_ms( int *m, int *s ){

  *m = *s / 60;
  *s = *s % 60;

}

int main(void)
{
  int m = 0;
  int s;

  printf("秒を入力して下さい \n");
  scanf("%d", &s);

  // ここで，m と s のアドレスを引数として渡すことで関数 s_to_ms を呼び出す
  s_to_ms( &m, &s );
  printf("%d 分 %d 秒です\n", m, s );

  return 0;
}