#include <stdio.h>

int main(void)
{

    for(char x=65; x < 91; x++ ) {
        printf("%c ", x);
    }

    printf("\n");

    for(char x=65 + 32; x < 91 + 32; x++ ) {
        printf("%c ", x);
    }
}