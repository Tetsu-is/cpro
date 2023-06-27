#include <stdio.h>
#include <math.h>

double sqrt_sum(double x, double y) {
    return sqrt(x * x + y * y);
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt_sum(x1 - x2, y1 - y2);
}

int main() {
    double x, y, dist_to_10_0, dist_to_0_10;

    printf("実数xを入力してください: ");
    scanf("%lf", &x);

    printf("実数yを入力してください: ");
    scanf("%lf", &y);

    dist_to_10_0 = distance(x, y, 10, 0);
    dist_to_0_10 = distance(x, y, 0, 10);

    if (fabs(dist_to_10_0 - dist_to_0_10) == 0) {
        printf("等距離\n");
    } else if (dist_to_10_0 < dist_to_0_10) {
        printf("点 (10, 0) により近い\n");
    } else {
        printf("点 (0, 10) により近い\n");
    }

    return 0;
}
