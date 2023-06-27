#include <stdio.h>

int str_length(char str[])
{
    int i = 0;

    while (str[i] != '\0')
    {
        i++;
    }

    return i;
}

int main(void)
{
    char message[256];
    unsigned int len;

    printf("メッセージを入力してください >>> ");
    fgets(message, sizeof(message), stdin);

    len = str_length(message);
    printf( "入力文字列: %s, 文字数: %d \n", message, len  );
    return 0;
}