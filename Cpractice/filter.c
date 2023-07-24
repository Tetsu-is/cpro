#include <stdio.h>
/* //配列の2次元目のサイズを出力する
int main(void)
{
    int array[2][3]= {{1,2,3},{4,5,6}};
    int size1 = sizeof(array)/sizeof(array[0]);
    int size2 = sizeof(array[0])/sizeof(array[0][0]);
    printf("%d\n",size2);
} */

int sum_of_product(int u[10][10], double v[][3])
{
    int width = sizeof(u)/sizeof(u[0]);
    int height = sizeof(u[0])/sizeof(u[0][0]);
    double glay_value = 0;

    for(int y; y<height-2; y++)
    {
        for(int x; x<width-2; x++)
        {
            glay_value = 0;
            for (int dy=0; dy<3; dy++)
            {
                for(int dx=0; dx<3; dx++)
                {
                    glay_value = glay_value + u[y+dy][x+dx] * v[dy][dx];
                }
            }
        }
    }
}