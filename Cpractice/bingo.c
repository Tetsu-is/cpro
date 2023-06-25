#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int number;
    int open;
} cell_t;

cell_t bingo_card[5][5];

void init_card(cell_t card[5][5])
{
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == 2 && j == 2)
            {
                card[i][j].number = 0;
                card[i][j].open = 1;
                continue;
            }
            else
            {
                card[i][j].number = 1 + (int)(rand() * (75 - 1 + 1.0) / (1.0 + RAND_MAX));
                card[i][j].open = 0;
            }
        }
    }
}

void print_card(cell_t card[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", card[i][j].number);
        }
        printf("\n");
    }
}

int drawed_ball[75];

void init_drawed_ball()
{
    for (int i = 0; i < 75; i++)
    {
        drawed_ball[i] = -1;
    }
}

void draw_ball()
{
    int x = 1 + (int)(rand() * (75 - 1 + 1.0) / (1.0 + RAND_MAX));
}

void open_hole(cell_t card[5][5], int drawed_ball)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; i < 5; j++)
        {
            if (card[i][j].number == drawed_ball)
            {
                card[i][j].open = 1;
            }
        }
    }
}

void check()
{
}

int main(void)
{
    init_card(bingo_card);
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ", bingo_card[i][j].number);
        }
        printf("\n");
    }
    return 0;
}