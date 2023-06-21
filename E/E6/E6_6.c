#include <stdio.h>
#include <math.h>

int main(void)
{
    int score[7] = {80, 70, 45, 90, 50, 95, 0};
    double total = 0;
    double avg, vrc, sd;
    double sigdef = 0;

    scanf("%d", &score[6]);

    for(int i=0; i<7; i++) {
        total += score[i];
    }
    avg = total/7;

    for(int i=0; i<7; i++) {
        sigdef += (avg-score[i])*(avg-score[i]);
    }
    vrc = sigdef/7;

    sd = sqrt(vrc);

    printf("avg = %lf, vrc = %lf, sd = %lf", avg, vrc, sd);

    return 0;
}