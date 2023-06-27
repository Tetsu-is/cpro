#include <stdio.h>
#include <math.h>

double decimal(double a) {
    return a - (int)a;
}

int main() {
    int b, x;
    double log_value, decimal_part;

    printf("正の整数bを入力してください: ");
    scanf("%d", &b);

    for (x = 1; x < b; x++) {
        log_value = log((double)x);
        decimal_part = decimal(log_value);
        printf("loge(%d)の小数部分: %.6f\n", x, decimal_part);
    }

    return 0;
}
