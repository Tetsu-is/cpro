#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define INITIAL_DICE_ROLLS 10
#define SAMPLES 100
#define MAX_ROLLS 1000000
#define SIDES_ON_DICE 6

int dice_roll() {
    return (rand() % SIDES_ON_DICE) + 1;
}

void calculate_statistics(int n, int m) {
    double sum_of_means = 0.0, sum_of_squared_means = 0.0;
    double mean_of_means, variance_of_means;

    for (int i = 0; i < m; ++i) {
        double sum = 0.0;
        for (int j = 0; j < n; ++j) {
            sum += dice_roll();
        }
        double mean = sum / n;
        sum_of_means += mean;
        sum_of_squared_means += mean * mean;
    }

    mean_of_means = sum_of_means / m;
    variance_of_means = sum_of_squared_means / m - mean_of_means * mean_of_means;

    printf("N = %d, M = %d: Mean of means = %.5f, Variance of means = %.5f\n", n, m, mean_of_means, variance_of_means);
}

int main() {
    srand(time(NULL));

    int n_values[] = {1, 2, 5, 10, 20, 50, 100, 1000, 10000, 100000};
    int size = sizeof(n_values) / sizeof(n_values[0]);

    for (int i = 0; i < size; ++i) {
        int n = n_values[i];
        if (n > MAX_ROLLS) {
            printf("Skipping N = %d as it exceeds maximum allowed value of %d\n", n, MAX_ROLLS);
            continue;
        }
        calculate_statistics(n, SAMPLES);
        calculate_statistics(n, MAX_ROLLS);
    }

    return 0;
}
