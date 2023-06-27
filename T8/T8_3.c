#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[6];
    char str2[21] = "It is Tuesday today.";
    char str3[] = "It is Tuesday today.";

    strcpy(str, "HELLO");
    printf("%s\n", str);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}