#include <stdio.h>

#define M 3

void print_array(double a[M][M]){
    int i, j;

    for(i = 0; i < M; i++){
        for(j = 0; j < M; j++){
            printf("%5.1f ", a[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    double a[M][M];

    a[0][0] =  2.5; a[0][1] =  0.0; a[0][2] = -1.0;
    a[1][0] = -1.0; a[1][1] =  1.5; a[1][2] =  0.0;
    a[2][0] =  5.0; a[2][1] =  4.0; a[2][2] =  3.0;

    print_array(a);

    return 0;
}
