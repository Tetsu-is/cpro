#include <stdio.h>
 
int main(void)
{
  char a[10];
  scanf("%s", a);
  //print all
  for(int i = 0; i < 10; i++)
  {
    printf("%c", a[i]);
  }
  return 0;
}