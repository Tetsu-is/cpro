#include  <stdio.h>
#include <math.h>

double deg_to_rad( int x )
{
    double rad;
    rad = (double)x * M_PI / 180;

    return rad;
}

int main(void)
{   
    double result;
    printf("0度は%lfラジアン\n", deg_to_rad(0));
    printf("30度は%lfラジアン\n", deg_to_rad(30));
    printf("45度は%lfラジアン\n", deg_to_rad(45));
    printf("75度は%lfラジアン\n", deg_to_rad(75));
    printf("90度は%lfラジアン\n", deg_to_rad(90));
    printf("135度は%lfラジアン\n", deg_to_rad(135));
    printf("180度は%lfラジアン\n", deg_to_rad(180));
}