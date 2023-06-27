#include <stdio.h>
#include <math.h>

double pyramid( int t, int h)
{
    double v;
    v = pow(t,2) * h / 3;

    return v;
}

int main(void)
{   
    printf(" i pyramid\n");
    for (int i = 5; i <= 10; i++)
    {
        printf("%2d %7.3lf\n", i, pyramid( i, i + 2));
    }
    
    
    return 0;
}