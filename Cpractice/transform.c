#include <stdio.h>
//２０２２　大問１(1)

void transform(double vector[], double matrix[][3])
{
    double result[3];
    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += vector[j] * matrix[i][j];
        }
        result[i] = sum;
    }
    for (int i = 0; i < 3; i++)
    {
        vector[i] = result[i];
    }
}