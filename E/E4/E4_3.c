#include <stdio.h>

void print_int ( int x )
{
    printf( "your number is %d \n", x);
} 

int main (void) 
{
    for (int i = 1; i <= 10; i++)
    {
        print_int( i );
    }
    
    return 0;
}