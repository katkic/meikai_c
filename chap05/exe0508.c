// 演習5-8
// List5-12の分布グラフの表示を逆順(0〜9, 10〜19..., 100)に行うプログラム
#include <stdio.h>
#define NUMBER 80

int main(void)
{
    int i, j;
    int students;
    int score[NUMBER];
    int bunpu[11] = {0};

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

    puts("\n--- 分布グラフ ---");
    for (i = 0; i < 10; i++) { // 100点未満を出力
        printf("%3d 〜%3d : ", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    printf("      100 : ");
    for (j = 0; j < bunpu[10]; j++) { // 100点を出力
        putchar('*');
    }

    return 0;
}
