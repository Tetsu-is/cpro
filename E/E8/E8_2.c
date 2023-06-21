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

void get_line(char buff[], int size)
{
    int i, c;

    for (i = 0; i < size - 1; i++)
    {
        c = getchar();
        if (c == EOF || c == '\n') break;
        buff[i] = c;
    }
    buff[i] = '\0';
}

int main(void)
{
    char message[256];
    unsigned int len;

    printf("メッセージを入力してください >>> ");
    get_line(message, 256 );

    len = str_length(message);
    printf( "入力文字列: %s, 文字数: %d \n", message, len  );
    return 0;
}