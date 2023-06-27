#include <stdio.h>

int main (void)
{
   int a = 1234;
   int b = 5678;
   int c = 7777;

   /* ここに a, b, c のアドレスを表示する文を追加 */
	printf("AddressA = %p\n" , &a);
	printf("AddressB = %p\n" , &b);
	printf("AddressC = %p\n" , &c);
   return 0;
}