#include <stdio.h>
 
int main(void)
{
  for(int i=0; i<10; i++)
  {
    for(int j=0; j<i; j++)
    {
      printf("O"); 
    }
    for(int j=0; j<10-i; j++)
    {
      printf("X"); 
    }
    printf("\n");
  }
}