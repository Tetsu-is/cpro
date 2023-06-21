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

int main() {
    char str[SIZE];
    get_line(str, SIZE);

    int uppercase = 0, lowercase = 0, digits = 0, others = 0;
    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 65 && str[i] <= 90) uppercase++;
        else if(str[i] >= 97 && str[i] <= 122) lowercase++;
        else if(str[i] >= 48 && str[i] <= 57) digits++;
        else others++;
    }
    /* str[ i ] が 65以上90以下なら大文字，97以上122以下なら小文字，
    48以上57以下なら数字である */

    int length = strlen(str);

    if(length == uppercase + lowercase + digits + others) {
        printf("長さ %d, 大文字 %d, 小文字 %d, 数字 %d, その他 %d\n", length, uppercase, lowercase, digits, others);
    } else {
        printf("Error: 合計の文字数が一致しません。\n");
    }

    return 0;
}
