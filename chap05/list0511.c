// 学生の点数を読み込んで最高点と最低点を表示
#include <stdio.h>
#define NUMBER 5

int main(void)
{
    int i;
    int score[NUMBER];
    int max, min;

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%d番 : ", i + 1);
        scanf("%d", &score[i]);
    }

    min = max = score[0];
    for (i = 1; i < NUMBER; i++) {
        if (score[i] > max) max = score[i];
        if (score[i] < min) min = score[i];
    }

    printf("最高点 : %d\n", max);
    printf("最低点 : %d\n", min);
    return 0;
}
