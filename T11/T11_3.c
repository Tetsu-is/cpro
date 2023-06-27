#include <stdio.h>
#include <string.h>

struct jugyo
{
    char dow[4]; //day of week
    int tp;
    char subject[30];
    int build;
    int room;
};

void print_class(struct jugyo a)
{
    printf("%s曜日%d時限目の%sは%d号館%d教室です．\n", a.dow, a.tp, a.subject, a.build, a.room);
}

int main(void)
{
    struct jugyo my_class, your_class;
    strcpy(my_class.dow, "Mon");
    my_class.tp = 1;
    strcpy(my_class.subject, "math");
    my_class.build = 4;
    my_class.room = 401;
    print_class(my_class);
    your_class = my_class;
    print_class(your_class);
    return 0;
}