#include <stdio.h>
#include <string.h>

int main(void)
{
    char txt1[256];
    char txt2[256];

    printf("文字列１を入力してください >>> ");
    fgets(txt1, sizeof(txt1), stdin);

    printf("文字列２を入力してください >>> ");
    fgets(txt2, sizeof(txt2), stdin);

    int cmp_result = strcmp(txt1, txt2);
    
    if (cmp_result == 0)
    {
        printf("%s\n", txt1);
    }
    else if (cmp_result < 0)
    {
        printf("%s, %s\n", txt1, txt2);
    }
    else
    {
        printf("%s, %s\n", txt2, txt1);
    }

    return 0;
}
