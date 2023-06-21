#include <stdio.h>
#define N 10

int main(void)
{
    int array[N];
    int m, n;
    int temp = 0;

    for(int i = 0; i < N; i++) {
        array[i] = 2*i + 2;
    }
    printf("set m and n: ");
    scanf("%d %d", &m, &n);

    temp = array[m-1];
    array[m-1] = array[n-1];
    array[n-1] = temp;

    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    
    return 0;
}