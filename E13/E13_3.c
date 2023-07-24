#include <stdio.h>
#include <math.h>

double compg(double x)  // compg関数の定義
{
    return sqrt(x + 1.0);
}

int main(void) 
{
    int n;
    double x;

    printf("Enter x: ");
    scanf("%lf", &x);
    
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) 
    {
        x = compg(x);
        printf("%.6lf\n", x);
    }

    return 0;
}
