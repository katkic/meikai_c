// 学生の点数を読み込んで分布を表示
#include <stdio.h>
#define NUMBER 80

int main(void)
{
    int i, j;
    int students;         // 実際の人数
    int score[NUMBER];    // 学生の点数
    int bunpu[11] = {0};  // 点数の分布

    printf("人数を入力してください : ");
    do {
        scanf("%d", &students);
        if (students < 1 || students > NUMBER) {
            printf("\a1〜80で入力してください");
        }
    } while (students < 1 || students > NUMBER);

    printf("%d人の点数を入力してください。\n", students);
    for (i = 0; i < students; i++) {
        printf("%2d番 : ", i + 1);
        do {
            scanf("%d", &score[i]);
            if (score[i] < 0 || score[i] > 100) {
                printf("\a0〜100で入力してください : ");
            }
        } while (score[i] < 0 || score[i] > 100);
        bunpu[score[i] / 10]++;  // 分布を作成
    }

    puts("\n--- 分布グラフ ---");
    printf("      100 : ");
    for (j = 0; j < bunpu[10]; j++) {  // 100点を出力
        putchar('*');
    }
    putchar('\n');

    for (i = 9; i >= 0; i--) {         // 100点未満を出力
        printf("%3d 〜%3d : ", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
