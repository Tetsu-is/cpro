#include <stdio.h>
#include <math.h>

#define M 3

int main(void)
{
    double a[M][M];
    int i, j;

    a[0][0] =  2.5; a[0][1] =  0.0; a[0][2] = -1.0;
    a[1][0] = -1.0; a[1][1] =  1.5; a[1][2] =  0.0;
    a[2][0] =  5.0; a[2][1] =  4.0; a[2][2] =  3.0;

    /* ここで行列のトレースを求める */
    double trace = 0.0;
    for(i = 0; i < M; i++){
        trace += a[i][i];
    }

    /* ここで行列のフロベニウスノルムを求める */
    double frobenius = 0.0;
    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            frobenius += a[i][j] * a[i][j];
        }
    }
    frobenius = sqrt(frobenius);

    /* トレースとフロベニウスノルムを表示する */
    printf("Trace: %f\n", trace);
    printf("Frobenius norm: %f\n", frobenius);

    return 0;
}
