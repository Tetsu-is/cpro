#include <stdio.h>

int sos(int n) {
    int sn = 0;
    for (int i =0; i < 10; i ++) {
        sn += (n + i)*(n + i); 
    }

    return sn;
}

int main(void) {
    int t;
    int i = 1;
    int si = 0;
    scanf("%d", &t);

    while(si < t) {
        si = sos(i);
        i ++;
    }

    printf("t = %d の場合： i = %d，s_%d = %d\n", t, i-1, i-1, si);


    return 0;
}