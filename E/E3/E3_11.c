#include <stdio.h>

int main(void)
{
    char s, t;
    int n, m;

    printf("s, t = ");
    scanf("%c %c", &s, &t);
    printf("n, m = ");
    scanf("%d %d", &n, &m);

    printf("s = %c, t = %c, n = %d, m = %d のとき\n", s, t, n, m);

    for(int i = 0; i < n; i ++){
        for(int j = 0; j < m; j ++){
            if(i % 5 == 0){
                printf("%c ", t );
            }
            else {
                if ((i + j) % 2 == 0) {
                printf("%c ", s);
            } else {
                printf("%c ", t);
            }
            }
        }
        printf("\n");
    }

    return 0;
}