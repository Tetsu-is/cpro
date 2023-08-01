#include <stdio.h>
#include <math.h>

int main(void)
{
	int decimal = 5;
    int binary[3]={0};
    for(int i=0; i<3; i++)
    {
        int y = decimal%2;
        decimal /=2;
        binary[2-i]=y;
    }
    for(int i=0;i<3;i++)
    {
        printf("%d",binary[i]);
    }
    printf("\n");
    return 0;
}