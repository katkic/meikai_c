// 演習5-12
// 2回分の点数を3次元配列tensuに格納するようにList5-13を書きかえたプログラム
#include <stdio.h>

int main(void)
{
    int i, j;
    int score[2][4][3] = {
        {
            {91, 63, 78},
            {67, 72, 46},
            {89, 34, 53},
            {32, 54, 34}
        },
        {
            {97, 67, 82},
            {73, 43, 46},
            {97, 56, 21},
            {85, 46, 35},
        }
    };
    int sum[4][3];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = score[0][i][j] + score[1][i][j];
        }
    }

    puts("1回目の点数");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", score[0][i][j]);
        }
        putchar('\n');
    }

    puts("\n2回目の点数");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", score[1][i][j]);
        }
        putchar('\n');
    }

    puts("\n合計点");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", sum[i][j]);
        }
        putchar('\n');
    }

    return 0;
}
