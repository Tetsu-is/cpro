#include <stdio.h>

int main(void)
{
    int diff;
    char large;
    char small;

    printf("アルファベットの小文字を入力してください>>>");
    scanf("%c", &small);
    diff = 'a' - 'A';
    large = small - diff;

    printf("大文字に変換すると>>>%c\n", large);

    return 0;
}