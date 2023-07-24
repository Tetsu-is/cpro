#include <stdio.h>
#include <math.h>

#define MAX 100

int main(void)
{
    int n;
    printf("Enter n-->");
    scanf("%d", &n);
    int sum = 0;
    int t = 0;

    for (int i=0; i<MAX; i++)
    {
        sum += pow(i,3);
        t = i;
        if(sum > n) break;
    }
    printf("minimum of t is %d\n", t);
    return 0;
}