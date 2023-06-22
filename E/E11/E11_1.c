#include <stdio.h>

struct date
{
    int y;
    int m;
    int d;
};

typedef struct date date_t;

void print_day2(date_t this_day)
{
    printf("今日は，%d年 %d月%d日です．", this_day.y, this_day.m, this_day.d);
}

int main(void)
{
    date_t my_day = {
        .y = 2021,
        .m = 9,
        .d = 1,
    };
    print_day2(my_day);
    return 0;
}