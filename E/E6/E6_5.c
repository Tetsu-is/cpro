#include <stdio.h>

int main(void)
{
    int score[7] = {80, 70, 45, 90, 50, 95, 0};
    int n;
    int max = 0;
    int min = 100;
    scanf("%d", &n);
    score[6] = n;
    for(int i = 0; i < 7; i++) {
        if (score[i] > max) {
            max = score[i];
        }
        if (score[i] < min) {
            min = score[i];
        }
    }
    printf("max = %d, min = %d", max, min);
    return 0;

}