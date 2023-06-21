#include <stdio.h>


int subt( int x )
{
  int y;

  y = x - 5;

  return y;
}

int main(void)
{
    int input, result;
    scanf("%d", &input);
    result = subt(input);
    printf("%d", result);

    return 0;
}