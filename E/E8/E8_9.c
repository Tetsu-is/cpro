#include <stdio.h>
#include <string.h>

#define SIZE 256

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

void str_reverse_copy(char dst[], char src[])
{
    int len = strlen(src);
    dst[len] = '\0';

    for (int i = 0; i < len; i++)
    {
        dst[len - 1 - i] = src[i];
    }
}

int main() {
    char str[SIZE];
    get_line(str, SIZE);

    char reversed[SIZE];
    str_reverse_copy(reversed, str);

    printf("%s\n", reversed);
    return 0;
}
