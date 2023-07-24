#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 100

int countWords(FILE *fp){
    char word[MAX_WORD_LEN];
    int count = 0;
    while(fscanf(fp, "%s", word) == 1){
        count++;
    }
    return count;
}

int main(){
    FILE *fp = fopen("XA_1.txt", "r");
    if(fp == NULL){
        printf("Cannot open the file\n");
        return 1;
    }

    int wordCount = countWords(fp);
    printf("The number of words in the file: %d\n", wordCount);

    fclose(fp);
    return 0;
}
