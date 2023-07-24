#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// 乱数生成関数: 0.0 ~ 1.0 の範囲
double my_random() {
    return (double)rand() / (double)RAND_MAX;
}

int main() {
    srand(time(NULL)); // 乱数生成器の初期化

    int N = 10000000; // 試行回数
    int count = 0; // 半径 1 以下の点の数

    for(int i = 0; i < N; i++) {
        double x = my_random();
        double y = my_random();
        if(x * x + y * y <= 1.0) {
            count++;
        }
    }

    double pi = 4.0 * (double)count / (double)N;
    printf("Estimated Pi = %.10f\n", pi);

    return 0;
}
