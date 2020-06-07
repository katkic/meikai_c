// 5人の学生の点数を読み込んで合計点と平均点を表示
#include <stdio.h>

int main(void)
{
    int i;
    int score[5];
    int max_score = 0;

    puts("5人の点数を入力してください。");
    for (i = 0; i < 5; i++ ) {
        printf("%d番 : ", i + 1);
        scanf("%d", &score[i]);
        max_score += score[i];
    }

    printf("合計点 : %5d\n", max_score);
    printf("平均点 : %5.1f\n", (double)max_score / 5);
}
