#include <stdio.h>
#include <stdbool.h>

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

int main(void)
{
    char str[SIZE];
    char sentence[] = "This is a pen. That is an apple.";
    get_line(str, SIZE);

    int i;
    bool same = true;

    for(i = 0; str[i] != '\0' ; i ++){
        int diff = sentence[i] - str[i];
        if(diff != 0){
            //printf("no same!\n");
            same = false;
            break;
        }
        else {
            //printf("same!\n");
        }
    }

    /* printf("sentence -> %s\n", sentence);
    printf("str -> %s\n", str); */

    if(same == true){
        printf("始まっている\n");
    }
    else {
        printf("始まっていない\n");
    }

    return 0;
}