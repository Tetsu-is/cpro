#include <stdio.h>

int main(void) {
    int a[4], b[4], sum[4];
    int n, ip=0;
    a[0] = 3;
    a[1] = -2;
    a[2] = -1;
    a[3] = 1;
    scanf("%d", &n);
    for (int i = 0; i < 4; i++) {
        b[i] = n + i;
    }
    
    for (int i = 0; i < 4; i++ ) {
        sum[i] = a[i] + b[i];
    }

    for (int i = 0; i < 4; i++) {
        ip += a[i]*b[i];
    }

    printf("和: (%d,%d,%d,%d) 内積: %d", sum[0], sum[1], sum[2], sum[3], ip);


    return 0;
}