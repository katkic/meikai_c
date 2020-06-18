// 4人の学生の3科目のテスト2回分の合計を求めて表示（関数版）
#include <stdio.h>

// 4行3列の行列aとbの和をcに格納する
void mat_add(const int a[4][3], const int b[4][3], int c[4][3])
{
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

// 4行3列の行列mを表示
void mat_print(const int m[4][3])
{
    int i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d", m[i][j]);
        }
        putchar('\n');
    }
}

int main(void)
{
    int score1[4][3] = { {91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34} };
    int score2[4][3] = { {97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35} };
    int sum[4][3];

    mat_add(score1, score2, sum);

    puts("1回目の点数");
    mat_print(score1);
    puts("2回目の点数");
    mat_print(score2);
    puts("合計点");
    mat_print(sum);

    return 0;
}
