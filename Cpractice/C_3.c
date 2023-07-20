#include <stdio.h>
#include <math.h>

double area(double r, int a)
{  
    double s = M_PI * r * r * a / 360;
    return s;
}

int main(void)
{   
    double x;
    int y;
    scanf("%lf %d", &x, &y);
    double s = 0;
    s = area(x,y);
    printf("%f", s);
    return 0;
}