#include <stdio.h>
#include <string.h>

struct roll
{
    char name[32];    // 名前
    int birth;        // 生年月日
    int zip;          // 郵便番号
    char address[82]; // 住所
    char tel[20];     // 電話番号
};

int main(void)
{
    // 構造体宣言と構造体変数定義
    struct roll my_data;

    // 構造体メンバへのデータの代入
    strcpy(my_data.name, "Taro"); // 名前
    my_data.birth = 20031117;     // 生年月日
    my_data.zip = 1234567;        // 郵便番号
    strcpy(my_data.address, "Sanda-shi Hyogo Pref.");
    // 住所
    strcpy(my_data.tel, "045-123-4567"); // 電話番号

    // タイトル表示
    printf("\nNAME         BIRTHDAY   ZIP      "
           "ADDRESS                      TEL\n");
    printf("%-10.10s%11.8d%10.7d  %-10.30s  %-12.12s\n", my_data.name, my_data.birth, my_data.zip, my_data.address,
           my_data.tel);

    return 0;
}