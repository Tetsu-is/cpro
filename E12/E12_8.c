#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 200

int main(int argc, char *argv[]) {
    char string[STRING_SIZE];
    int count[26] = {0};
    FILE *fpin, *fpout;

    if ((fpin = fopen("article.txt", "r")) == NULL) {
        printf("Cannot open the file. --- article.txt\n");
        exit(EXIT_FAILURE);
    }

    if ((fpout = fopen("cnt_article.txt", "w")) == NULL) {
        printf("Cannot open the file. --- cnt_article.txt\n");
        fclose(fpin);
        exit(EXIT_FAILURE);
    }

    while (fgets(string, STRING_SIZE, fpin)) {
        for (int i = 0; string[i] != '\0'; i++) {
            if ('a' <= string[i] && string[i] <= 'z') {
                count[string[i] - 'a']++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        fprintf(fpout, "%c: %d\n", 'a' + i, count[i]);
    }

    fclose(fpin);
    fclose(fpout);

    return EXIT_SUCCESS;
}
