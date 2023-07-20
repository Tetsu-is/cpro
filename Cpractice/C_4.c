#include <stdio.h>

double distance(int n, int m, double array[8])
{
    double start = 0;
    double goal = 0;
    double d = 0;
    for(int i=0; i<n; i++)
   {
    start += array[i];
   }
   for(int i=0; i<m; i++)
   {
    goal += array[i];
   }
   if(n<+m) d = goal - start;
   else d = start - goal;

   return d;
}

int main(void)
{   
    double stations[8] = {0.0, 6.78, 18.76, 51.11, 18.78, 15.87, 23.7, 32.44};
    double d = 0;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            d = distance(i,j,stations);
            printf("%6g ", d);
        }
        printf("\n");
    }
    return 0;
}