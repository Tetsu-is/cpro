#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int s, t;
    int x, y;
    int cnt = 0;

    printf("s, tを入力してください（s < t）: ");
    scanf("%d%d", &s, &t);

    for (x = s; x < t; x++) {
        for (y = x + 1; y <= t; y++) {
            if (gcd(x, y) == 1) {
                printf("(%d, %d)\n", x, y);
                cnt++;
            }
        }
    }

    printf("%d個\n", cnt);

    return 0;
}

int gcd(int a, int b)
{
    int z;

    while ((z = a % b) != 0) {
        a = b;
        b = z;
    }

    return b;
}
