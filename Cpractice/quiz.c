#include <stdio.h>

void calculate(int a[3][5], int b[3][2]) {

    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += a[i][j];
        }
        b[i][0] = sum;
        b[i][1] = sum/5;
        sum = 0;
    }

}

int main(void) {
    int test_result[3][5] = {{80, 70, 40, 60, 80}, {50, 90, 60, 40, 30}, {70, 40, 70, 60, 50}};
    int result[3][2];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
        }
    }
    
    calculate(test_result, result);

    for (int i = 0; i < 3; i++) {
        printf("sum = %d, avg = %d\n", result[i][0], result[i][1]);
    }

    return 0;
}