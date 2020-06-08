// 演習5-9
// 演習5-8の分布グラフの表示を縦方向に行うプログラム
#include <stdio.h>
#define NUMBER 80

int main(void)
{
    int i, j;
    int students;
    int score[NUMBER];
    int bunpu[11] = {0};
    int bunpu_max = 0;

    printf("人数を入力してください : ");
    do {
        scanf("%d", &students);
        if (students < 1 || students > NUMBER)
        {
            printf("\a1〜80で入力してください");
        }
    } while (students < 1 || students > NUMBER);

    printf("%d人の点数を入力してください。\n", students);
    for (i = 0; i < students; i++) {
        printf("%2d番 : ", i + 1);
        do {
            scanf("%d", &score[i]);
            if (score[i] < 0 || score[i] > 100) {
                printf("\a0〜100で入力してください。\n");
                printf("%2d番 : ", i + 1);
            }
        } while (score[i] < 0 || score[i] > 100);
        bunpu[score[i] / 10]++; // 分布を作成
    }

    puts("\n--- 分布グラフ ---\n");

    for (i = 0; i <= 10; i++) {
        if (bunpu[i] > bunpu_max) {
            bunpu_max = bunpu[i];
        }
    }
    for (i = bunpu_max; i >= 1; i--) {
        for (j = 0; j <= 10; j++) {
            if (bunpu[j] >= i) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        putchar('\n');
    }
    for (i = 0; i < 34; i++) {
        putchar('-');
    }
    putchar('\n');

    for (i = 0; i <= 10; i++) {
        printf("%2d ", i * 10);
    }
    putchar('\n');

    return 0;
}
