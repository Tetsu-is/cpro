#include <stdio.h>

int main(void)
{
    double p;

    p = 314.159265358979323846;
    printf("%f\n" ,p);
    printf("%13.5f\n" ,p);
    printf("%e\n" ,p);
    printf("%g\n" ,p);

    return 0;
}