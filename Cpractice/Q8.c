#include <stdio.h>


#define KAMOKU 3
#define NINZU 3

void setAverage(int a[][KAMOKU+1]){
    int average = 0;
    for(int i = 0; i < KAMOKU + 1; i ++){
        int sum = 0;
        for(int j = 0; j < NINZU; j ++){
            sum += a[i][j];
        }
        average = sum / NINZU;
        a[]
    }

}



int main(void)
{
    int test_result[NINZU + 1][KAMOKU + 1] = {
        {30, 45, 90, 0},
        {15, 30, 45, 0},
        {15, 30, 15, 0},
        {45, 15, 15, 0}
    };



    return 0;
}