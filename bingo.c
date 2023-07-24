#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    int number;
    int open;
} cell_t;

cell_t bingo_card[5][5];

void randpick(cell_t card[5][5], int i, int j)
{
    if(i==0)
            {
                card[j][i].number = 1 + (int)(rand() * (15 - 1 + 1.0) / (1.0 + RAND_MAX));
            }
            
            if(i==1)
            {
                card[j][i].number = 16 + (int)(rand() * (30 - 16 + 1.0) / (1.0 + RAND_MAX));
            }

            if(i==2)
            {
                card[j][i].number = 31 + (int)(rand() * (45 - 31 + 1.0) / (1.0 + RAND_MAX));
            }

            if(i==3)
            {
                card[j][i].number = 46 + (int)(rand() * (60 - 46 + 1.0) / (1.0 + RAND_MAX));
            }

            if(i==4)
            {
                card[j][i].number = 61 + (int)(rand() * (75 - 61 + 1.0) / (1.0 + RAND_MAX));
            }
}

void init_card(cell_t card[5][5])
// Bの列には1-15、Iは16-30、Nは31-45、Gは45-60、Oは61-75が書かれている
{
    srand(time(0));
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            randpick(card, i, j);
            for(int k=0; k<j; k++)
            {
                if(card[j][i].number == card[k][i].number)
                {
                    j--;
                    break;
                }
            }
            
            card[j][i].open = 0;
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
            // printf("\x1b[31m");
            if (card[i][j].open == 1)
                printf("\x1b[31m"); // 赤色
            printf("%2d ", card[i][j].number);
            printf("\x1b[39m"); // デフォルト
        }
        printf("\n");
    }
}


int draw_ball(int past[75])
{
    int x;
    int flag = 1;
    for(int i=0; i<1; i++)
    {
        x = 1 + (int)(rand() * (75 - 1 + 1.0) / (1.0 + RAND_MAX));
        for(int j=0; j<75; j++)
        {
            if(x == past[j])
            {
                i--;
            }
        }
    }
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
            }
        }
    }
}

int check_tate(cell_t card[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        if (card[0][i].open * card[1][i].open * card[2][i].open * card[3][i].open * card[4][i].open == 1)
        {
            return 1;
        }
    }
    return 0;
}

int check_yoko(cell_t card[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        if (card[i][0].open * card[i][1].open * card[i][2].open * card[i][3].open * card[i][4].open == 1)
        {
            return 1;
        }
    }
    return 0;
}

int check_naname(cell_t card[5][5])
{
    if (card[0][0].open * card[1][1].open * card[2][2].open * card[3][3].open * card[4][4].open == 1)
    {
        return 1;
    }
    if (card[0][4].open * card[1][3].open * card[2][2].open * card[3][1].open * card[4][0].open == 1)
    {
        return 1;
    }
    return 0;
}

int reach(cell_t card[5][5])
{
    //column
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {   
        sum = 0;
        for(int j=0; j<5; j++)
        {
            sum += card[j][i].open;
        }
        if(sum == 4)
        {
            return 1;
        }
    }
    //row
    for (int i = 0; i < 5; i++)
    {   
        sum = 0;
        for(int j=0; j<5; j++)
        {
            sum += card[i][j].open;
        }
        if(sum == 4)
        {
            return 1;
        }
    }
    //naname
    sum = 0;
    for(int i=0; i<5; i++)
    {
        sum += card[i][i].open;
    }
    if(sum == 4)
    {
        return 1;
    }
    return 0;
}

// bingoを判定する
int bingo(cell_t bingo_card[5][5])
{
    if (check_tate(bingo_card) == 1)
        return 1;
    if (check_yoko(bingo_card) == 1)
        return 1;
    if (check_naname(bingo_card) == 1)
        return 1;
    return 0;
}

void game(int past[75])
{
    int drawed_ball = draw_ball(past);
    open_hole(bingo_card, drawed_ball);
    print_card(bingo_card);
}

void check_duplicate(cell_t card[5][5])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            for(int k=0; k<j; k++)
            {
                if(card[j][i].number == card[k][i].number)
                {
                    printf("重複; i=%d, j=%d\n", i, j);
                    break;
                }
            }
        }
    }
    printf("重複なし\n");
}

int main(void)
{
    int isBingo = 0;
    int isReach = 0;
    int past[75];
    for(int i=0; i<75; i++)
    {
        past[i] = 0;
    }
    init_card(bingo_card);
    print_card(bingo_card);
    for (int i = 0;; i++)
    {
        game(past);
        isBingo = bingo(bingo_card);
        if (isBingo == 1)
        {
            printf("BINGO!\n");
            break;
        }
        isReach = reach(bingo_card);
        if (isReach == 1)
        {
            printf("REACH!\n");
        }
        
    }
    check_duplicate(bingo_card);

    return 0;
}