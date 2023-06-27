#include <stdio.h>

int main(void) {
    double sec[5] = {7.2, 6.7, 8.3, 6.9, 7.7};
    double min = 0.0;
    double max = 15.0;

    for (int i = 0; i < 5; i ++) {
        printf("%2.1f / ", sec[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i ++) {
        if(sec[i]>max) {
            max = sec[i];
        }

        if(sec[i]<min) {
            min = sec[i];
        }
    } 

    printf("最も早いのは%2.1fで、最も遅いのは%2.1f", min, max);
    
    return 0;
}