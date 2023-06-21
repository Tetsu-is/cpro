#include <stdio.h>

int main(void)
{
  char s[8];

  s[0]='k'; s[1]='w'; s[2]='a'; s[3]='n';
  s[4]='s'; s[5]='e'; s[6]='i'; s[7]='\0';
  printf("(0) s = \"%s\"\n", s);

  s[0]='K';
  printf("(1) s = \"%s\"\n", s);

  s[4]='\0';
  printf("(2) s = \"%s\"\n", s);

  s[4]='s';
  printf("(3) s = \"%s\"\n", s);

  s[6]='0';
  printf("(4) s = \"%s\"\n", s);

  s[5]=48;
  printf("(5) s = \"%s\"\n", s);

  s[4]=0;
  printf("(6) s = \"%s\"\n", s);

  s[0]='\0';
  printf("(7) s = \"%s\"\n", s);

  s[0]='k';
  printf("(8) s = \"%s\"\n", s);

  return 0;
}