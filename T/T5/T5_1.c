#include <stdio.h>

int gcd(int, int);

int main() {
    int a, b, result;

    printf("整数1を入力してください: ");
    scanf("%d", &a);

    printf("整数2を入力してください: ");
    scanf("%d", &b);

    result = gcd(a, b);
    printf("%dと%dの最大公約数は%dです", a, b, result);

    return 0;
}

int gcd(int x, int y) {
    int temp;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    return x;
}
