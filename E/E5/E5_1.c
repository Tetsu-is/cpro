#include <stdio.h>

int rise_num(int m) {
    int rise = 0;
    rise = (m-1) / 3;

    return rise;
}

int salary( int a, int m ) {
    int salary;
    salary = a + 10 * rise_num(m); 

    return salary;
}

int main(void) {
    int a;
    int n = 20;
    int current_salary = 0;
    scanf("%d", &a);
    for (int i = 1; i <= n; i ++ ) {
        current_salary = salary(a, i);
        printf("%dヶ月目の時給は %d円です．\n", i, current_salary);
    }

    return 0;
    
}