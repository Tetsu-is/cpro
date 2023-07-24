#include <stdio.h>

#define M 5
#define N 4

int main( void )
{
	int sum;
	double average;
        // 使用しない変数は消去すること

	int a[ M ][ N ] = { { 70,  85,  70, 100 }, 
	                    { 60,  30,  40,  50 }, 
	                    { 50,  60,  70,  45 }, 
	                    { 80, 100,  90,  85 }, 
	                    { 75,  90,  55,  80 }, 
	};

    for(int i = 0; i < M; i ++){
        sum = 0;
        average = 0;
        for(int j = 0; j < N; j ++){
            sum += a[i][j];
        }
        average = (double) sum / N;
        printf("学生%dの平均点は%4.2f点です。\n", i, average);
    }

    for(int i = 0; i < N; i ++){
        sum = 0;
        average = 0;
        for(int j = 0; j < M; j ++){
            sum += a[j][i];
        }
        average = sum / M;
        printf("%d回目の試験の平均点は %4.2f \n", i, average); 
    }

	return 0;
}