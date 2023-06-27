#include <stdio.h>

int recurrence( int x, int n ) {
    int result = 2*x - n*n;

    return result;
}

int main(void) {
    int an=0;
    scanf("%d", &an);
    for(int i=0; i<10; i++) {
        printf("a_%d =  %d\n",i, an);
        an = recurrence(an, i);
    }

    return 0;
}