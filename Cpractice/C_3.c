#include <stdio.h>
#define N 2

int main(void)
{
    int matrix[N][N];
    int determinant, trace;

    printf("(1, 1)成分を入力して下さい>>> ");
    scanf( "%d" , &matrix[0][0] );
    printf("(1, 2)成分を入力して下さい>>> ");
    scanf( "%d" , &matrix[0][1] );
    printf("(2, 1)成分を入力して下さい>>> ");
    scanf( "%d" , &matrix[1][0] );
    printf("(2, 2)成分を入力して下さい>>> ");
    scanf( "%d" , &matrix[1][1] );

    determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    trace = matrix[0][0] + matrix[1][1];




    printf("行列式は %d，トレースは %d です．\n", determinant, trace);

    return 0;
}
