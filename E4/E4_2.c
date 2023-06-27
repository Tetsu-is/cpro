#include <stdio.h>
#include <math.h>

int polynomial ( int x )
{
    int y;
    y = 2 * pow(x,2) - 5 * x + 3;

    return y; 
}

int main (void)
{
    int a;
    scanf("%d", &a);
    for(int i = 1; i <= a; i++) {
        printf("f( %d ) = %d\n", i, polynomial( i ));
    }

    return 0;
}