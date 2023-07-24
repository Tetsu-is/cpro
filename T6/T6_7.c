#include <stdio.h>
#include <float.h>
#define N 5
int main(void) {
    double sec[5] = {7.2, 6.7, 8.3, 6.9, 7.7};
    double min = DBL_MAX;
    double max = - DBL_MAX;

    for (int i = 0; i < N ; i ++) {
        printf("%2.1f / ", sec[i]);
    }
    printf("\n");

    for (int i = 0; i < N ; i ++) {
        if(sec[i]>max) {
            max = sec[i];
        }

        if(sec[i]<min) {
            min = sec[i];
        }
    } 

    printf("最も早いのは%2.1f秒で、最も遅いのは%2.1f秒\n", min, max);
    
    return 0;
}