#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORD_LEN 100
#define MAX_WORDS 300

typedef struct {
    char pre[MAX_WORD_LEN];
    char wrd[MAX_WORD_LEN];
    char ant[MAX_WORD_LEN];
} WordTriple;

int compare(const void *a, const void *b) {
    return strncmp(((WordTriple *)a)->wrd, ((WordTriple *)b)->wrd, 3);
}

int main() {
    FILE *fp = fopen("XA_1.txt", "r");
    if (fp == NULL) {
        printf("Cannot open the file\n");
        return 1;
    }

    WordTriple words[MAX_WORDS];
    char temp[MAX_WORD_LEN] = "";
    int count = 0;
    while (fscanf(fp, "%s", words[count].wrd) == 1) {
        strncpy(words[count].pre, temp, MAX_WORD_LEN);
        strncpy(temp, words[count].wrd, MAX_WORD_LEN);
        if (count > 0) {
            strncpy(words[count-1].ant, words[count].wrd, MAX_WORD_LEN);
        }
        count++;
    }
    strncpy(words[count-1].ant, "", MAX_WORD_LEN);

    qsort(words, count, sizeof(WordTriple), compare);

    for (int i = 0; i < count; i++) {
        printf("(%s/%s/%s)\n", words[i].pre, words[i].wrd, words[i].ant);
    }

    fclose(fp);
    return 0;
}
