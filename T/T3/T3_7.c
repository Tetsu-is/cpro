#include <stdio.h>

int main(void)
{
    for(int i=0;i<10;i++){
        for(int j=i+1;j<11;j++){
            printf("(%d,%d)\n",i,j);
        }
    }

    return 0;
}