#include <stdio.h>

#define N 12

struct npb
{
    char name[15];
    double wp;
    int win;
    int lose;
    int tie;
};

typedef struct npb npb_t;


int main(void)
{
    npb_t team[ N ] = {
    { "Bay Stars", 0.0,  9,  7, 2 },
    { "Buffaloes", 0.0,  8,  9, 1 },
    { "Carp", 0.0,  5, 12, 1 },
    { "Dragons", 0.0,  6, 12, 0 },
    { "Fighters", 0.0,  7, 11, 0 },
    { "Giants", 0.0,  7, 10, 1 },
    { "Golden Eagles", 0.0,  9,  9, 0 },
    { "Hawks", 0.0, 10,  7, 1 },
    { "Lions", 0.0,  9,  8, 1 },
    { "Marines", 0.0, 10,  8, 0 },
    { "Swallows", 0.0, 12,  5, 1 },
    { "Tigers", 0.0, 12,  6, 0 },
    };

    int i, best_team = 0;

    for (i = 0; i < N; i++) {
        team[i].wp = (double)team[i].win / (team[i].win + team[i].lose);
        if (team[i].wp > team[best_team].wp) {
            best_team = i;
        }
    }

    printf("Top team: %s\n", team[best_team].name);
    printf("Winning Percentage: %.2f\n", team[best_team].wp);
    printf("Wins: %d\n", team[best_team].win);
    printf("Losses: %d\n", team[best_team].lose);
    printf("Ties: %d\n", team[best_team].tie);

    return 0;
}

/* main( ) の外部で配列の大きさを定義する．「#define N 12」と記述せよ．
main( ) の内部に，npb_t 型の構造体の配列 team[ N ] を定義し，以下に示す（架空の）データで構造体の配列 team[ N ] を初期化せよ．
各球団の勝率（0.0以上1.0以下の実数で表す）を計算して，構造体のメンバ team[i].wp に代入せよ．ただし，勝率は，(勝利数)/(勝利数＋敗戦数) と定義する（引き分け数は分母に含まない）．
12球団の中での勝率が最大であるものを首位とする．首位の球団のデータ（球団名/勝率/勝利数/敗戦数/引き分け数）を表示せよ． 
最大値を求める過程で，最大値を与える配列の添字も同時に記録しておけばよい（本問では同率首位はないことを仮定してよい）．
 npb_t team[ N ] = {
    { "Bay Stars", 0.0,  9,  7, 2 },
    { "Buffaloes", 0.0,  8,  9, 1 },
    { "Carp", 0.0,  5, 12, 1 },
    { "Dragons", 0.0,  6, 12, 0 },
    { "Fighters", 0.0,  7, 11, 0 },
    { "Giants", 0.0,  7, 10, 1 },
    { "Golden Eagles", 0.0,  9,  9, 0 },
    { "Hawks", 0.0, 10,  7, 1 },
    { "Lions", 0.0,  9,  8, 1 },
    { "Marines", 0.0, 10,  8, 0 },
    { "Swallows", 0.0, 12,  5, 1 },
    { "Tigers", 0.0, 12,  6, 0 },
}; */


