#include <stdio.h>

int main(void)
{
    int max;

    scanf("%d", &max);

    for (int i = 1; i < max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            printf("%d ", i);
        }
    }
}