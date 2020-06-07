// 5人の学生の点数を読み込んで合計点と平均点を表示（人数をマクロで定義）
#include <stdio.h>
#define NUMBER 5 // 学生の人数

int main(void)
{
    int i;
    int score[NUMBER];   // NUMBER人の学生の点数
    int total_score = 0; // 合計点

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++)
    {
        printf("%d番 : ", i + 1);
        scanf("%d", &score[i]);
        total_score += score[i];
    }

    printf("合計点 : %5d\n", total_score);
    printf("平均点 : %5.1f\n", (double)total_score / NUMBER);
}
