#include <stdio.h>
#include <stdbool.h>
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

int main(void)
{
    char str[SIZE];
    char sentence[] = "This is a pen. That is an apple.";
    get_line(str, SIZE);


    int i,j;
    int sentence_length = strlen(sentence);
    int str_length = strlen(str);


    bool match = false;
    for(i=0; i<sentence_length; i++){
        for(j=0; j<str_length; j++){
            if(sentence[i+j]-str[j]==0){
                match = true;
            }
            else{
                match = false;
                break;
            }
        }
        if(match == true){
            break;
        }
    }


    if(match == true){
        printf("含まれている\n");
    }
    else {
        printf("含まれていない\n");
    }

    return 0;
}