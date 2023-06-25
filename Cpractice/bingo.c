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
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d ", card[i][j].number);
        }
        printf("\n");
    }
}

//int drawed_ball[75];

/* void init_drawed_ball()
{
    for (int i = 0; i < 75; i++)
    {
        drawed_ball[i] = -1;
    }
} */

int  draw_ball()
{
    int x = 1 + (int)(rand() * (75 - 1 + 1.0) / (1.0 + RAND_MAX));
    printf("\n");
    printf("drawed ball: %d\n", x);
    return x;
}

void open_hole(cell_t card[5][5], int drawed_ball)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (card[i][j].number == drawed_ball)
            {   
                printf("あたり\n");
                card[i][j].open = 1;
                card[i][j].number = 0;
            }
        }
    }
}

int  check_tate(cell_t card[5][5])
{
    int tate = 0;
    for(int i=0; i<3; i++)
    {
        if(card[0][i].number == card[1][i].number && card[1][i].number == card[2][i].number)
        {
            tate = 1;
        }
    }
    return tate;
}

int check_yoko(cell_t card[5][5])
{
    int yoko = 0;
    for(int i=0; i<3; i++)
    {
        if(card[i][0].number == card[i][1].number && card[i][1].number == card[i][2].number)
        {
            yoko = 1;
        }
    }
    return yoko;
}

int check_naname(cell_t card[5][5])
{
    int naname = 0;
    if(card[0][0].number == card[1][1].number && card[1][1].number == card[2][2].number)
    {
        naname = 1;
    }
    if(card[0][2].number == card[1][1].number && card[1][1].number == card[2][0].number)
    {
        naname = 1;
    }
    return naname;
}

// bingoを判定する
int bingo(cell_t bingo_card[5][5])
{   
    if(check_tate(bingo_card)==1) return 1;
    if (check_yoko(bingo_card)==1) return 1;
    if (check_naname(bingo_card)==1) return 1;
    return 0;
}

void game()
{
    int drawed_ball = draw_ball();
    open_hole(bingo_card, drawed_ball);
    print_card(bingo_card);
}

int main(void)
{   
    int isBingo = 0;
    init_card(bingo_card);
    print_card(bingo_card);
    for (int i = 0; i < 75; i++)
    {
        game();
        isBingo = bingo(bingo_card);
        if(isBingo == 1)
        {
            printf("BINGO!\n");
            //print_card(bingo_card);
            break;
        }
    }
    
    return 0;
}