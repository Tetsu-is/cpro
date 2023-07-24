#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 200
#define STUDENTS 30



struct student_data {
    int id;
    int score;
};

typedef struct student_data student_t;

void make_ranking(student_t* students, int n);

int main(int argc, char *argv[])
{
    char filename[FILENAME_MAX];
    char string[STRING_SIZE];
    FILE *fp;
    student_t s[STUDENTS];

    strcpy(filename, argv[1]); 

    if ((fp = fopen(filename, "r")) == NULL)
    {
        printf("ファイルが見つかりません。 --- %s\n", filename);
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (fgets(string, STRING_SIZE, fp))
    {
        sscanf(string, "%d %d", &s[i].id, &s[i].score);
        i++;
    }

    make_ranking(s, i);

    fclose(fp);

    return EXIT_SUCCESS;
}

void make_ranking(student_t* students, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (students[j - 1].score < students[j].score)
            {
                student_t temp = students[j];
                students[j] = students[j - 1];
                students[j - 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%2d位 %d %d\n", i + 1, students[i].id, students[i].score);
    }
}
