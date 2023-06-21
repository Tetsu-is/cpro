#include <stdio.h>
#include <math.h>

double deg_to_rad(int x) {
    return (double)x * M_PI / 180.0;
}

double func_sin(int x) {
    double radian = deg_to_rad(x);
    return sin(radian);
}

int main() {
    int a, i;

    printf("整数aを入力してください: ");
    scanf("%d", &a);

    for (i = 1; i <= 10; i++) {
        double sin_value = func_sin(a * i);
        printf("sin( %d [deg] ) = %f\n", a * i, sin_value);
    }

    return 0;
}
