#include <stdio.h>

struct date
{
    int y;
    int m;
    int d;
};

void print_day( struct date hiduke ) 
{
    printf("今日は，%d年 %d月%d日です．", hiduke.y, hiduke.m, hiduke.d);
}

int main(void)
{
    struct date my_day;
    my_day.y = 2023;
    my_day.m = 7;
    my_day.d = 20;

    print_day(my_day);

    return 0;
}