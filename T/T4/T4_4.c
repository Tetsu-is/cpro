#include <stdio.h>

double prod_d ( double x, double y)
{   
    double z;
    z = x * y;
    return z;
}

int main (void)
{
    double input1, input2, result;
    scanf( "%lf %lf", &input1, &input2 );
    result = prod_d ( input1, input2 );
    printf( "%lf × %lf = %lf", input1, input2, result );

    return 0;
}