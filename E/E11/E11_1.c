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
    printf("a");
}

int main(void)
{
    date_t my_day = {
        .y = 2021,
        .m = 9,
        .d = 1,
    };
    return 0;
}