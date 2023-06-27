#include <stdio.h>
#include <math.h>

double myexp(double x) {
    double sum = 1.0;
    double term = 1.0;
    for (int k = 1; ; ++k) {
        term *= x / k;
        if (term < pow(10, -6)) break;
        sum += term;
    }
    return sum;
}

int main() {
    printf("     x      myexp(x)\n");
    for (int y = 1; y < 11; y++) {
        double x = (double) y;
        printf("%6.1f %13.5f\n", x, myexp(x));
    }
    return 0;
}