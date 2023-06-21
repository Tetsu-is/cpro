#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n, token;
    scanf("%d", &n);
    printf("%d -> ", n);
    //素数候補
    for(int i = 2; i <= n; i ++) {
        bool isPrime = true;
        token = n;
        //割り切れたら素数じゃない
        for(int j = 2; j < i; j++) {
            if(i % j == 0 && i != 2) {
                isPrime = false;
                break;
            }
        }
        //素数なら割っていく
        if(isPrime) {
            while(token % i == 0) {
                printf("%d ", i);
                token = token / i;
            }
        }
    }
}