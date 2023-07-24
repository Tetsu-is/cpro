#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define N 100
#define M 1000000

double calculate_mean(int n)
{
    double sum = 0;
    double mean = 0;
    int dice_side = 0;

    for (int i = 0; i < n; i++)
    {
        dice_side = rand() % 6 + 1;
        sum += dice_side;
    }
    
    mean = sum / n;

    return mean;
}

int main(void)
{
    srand(time(NULL));
    double mean = 0;
    double mean_of_means = 0;
    double sum_of_means = 0;
    double sum_of_squad_means = 0;
    double variance_of_means = 0;

    for(int i = 0; i < M; i++)
    {
        mean = calculate_mean(N);
        sum_of_means += mean;
        sum_of_squad_means += pow(mean, 2);
    }

    mean_of_means = sum_of_means / M;
    variance_of_means = (sum_of_squad_means / N) - pow((sum_of_means / N), 2);

    printf("mean_of_means: %f variance_of_means: %f\n", mean_of_means, variance_of_means);
    return 0;
}