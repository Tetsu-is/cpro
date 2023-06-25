#include <stdio.h>

#define N 10

typedef struct student {
    int no;     // 学生番号
    int eng;    // 英語の点数
    int math;   // 数学の点数
    int sci;    // 理科の点数
    int total;  // 3教科の合計
} student_t;

void comp_total(student_t data[N]) {
    for (int i = 0; i < N; i++) {
        data[i].total = data[i].eng + data[i].math + data[i].sci;
    }
}

void print_student(student_t a) {
    printf("Student No: %d, English: %d, Math: %d, Science: %d, Total: %d\n", a.no, a.eng, a.math, a.sci, a.total);
}

int main(void) {
    int i, flag = 0, a, b;
    int totalEng = 0, totalMath = 0, totalSci = 0, totalEngPassed = 0, totalMathPassed = 0, totalSciPassed = 0, numPassed = 0;
    int targetNo;
    
    student_t person[N] = {
        {1005, 86, 75, 92, 0},
        {1012, 65, 91, 80, 0},
        {1043, 45, 75, 58, 0},
        {1173, 97, 75, 82, 0},
        {1224, 77, 77, 77, 0},
        {1397, 27, 62, 35, 0},
        {1500, 58, 85, 62, 0},
        {1734, 80, 52, 46, 0},
        {1888, 98, 93, 96, 0},
        {1920, 60, 60, 60, 0},
    };
    
    comp_total(person);

    for (i = 0; i < N; i++) {
        print_student(person[i]);
    }
    
    printf("Enter a student number: ");
    scanf("%d", &targetNo);
    
    for (i = 0; i < N; i++) {
        if (person[i].no == targetNo) {
            print_student(person[i]);
            flag = 1;
        }
    }

    if (!flag) {
        printf("Student did not take the exam.\n");
    }
    printf("\n");

    printf("Enter the minimum passing marks for each subject and the minimum total: ");
    scanf("%d %d", &a, &b);

    for (i = 0; i < N; i++) {
        if ((person[i].eng >= a && person[i].math >= a && person[i].sci >= a) || person[i].total >= b) {
            print_student(person[i]);
            totalEngPassed += person[i].eng;
            totalMathPassed += person[i].math;
            totalSciPassed += person[i].sci;
            numPassed++;
        }
        totalEng += person[i].eng;
        totalMath += person[i].math;
        totalSci += person[i].sci;
    }
    printf("\n");

    printf("Average English mark: %.2f, Average Math mark: %.2f, Average Science mark: %.2f\n", totalEng / (double)N, totalMath / (double)N, totalSci / (double)N);
    if (numPassed > 0) {
        printf("Average English mark for passed students: %.2f, Average Math mark for passed students: %.2f, Average Science mark for passed students: %.2f\n", totalEngPassed / (double)numPassed, totalMathPassed / (double)numPassed, totalSciPassed / (double)numPassed);
    }

    return 0;
}