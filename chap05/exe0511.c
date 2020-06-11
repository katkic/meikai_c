// 演習5-11
// 6人の2科目（国語・数学）の点数を読み込んで、科目ごとの合計点と平均点、学生ごとの合計点と平均点を求めるプログラム

#include <stdio.h>
#define NINZU 6

int main(void)
{
    int i, j, total_score;  // 全教科の合計
    int score[NINZU][2];
    int student_score[NINZU] = {0};  // 各学生の合計点
    int subject_score[2] = {0};      // 各科目の合計点
    double japanese_ave, math_ave, total_ave;  // 国語, 数学, 全教科の平均

    printf("%d人の点数を入力してください。\n", NINZU);
    for (i = 0; i < 6; i++) {
        do {
            printf("No.%d -> 国語 : ", i + 1);
            scanf("%d", &score[i][0]);
            if (score[i][0] < 0 || 100 < score[i][0]) {
                puts("0〜100で入力してください。");
            }
        } while (score[i][0] < 0 || 100 < score[i][0]);

        do
        {
            printf("        数学 : ");
            scanf("%d", &score[i][1]);
            if (score[i][1] < 0 || 100 < score[i][1]) {
                puts("0〜100で入力してください。");
            }
        } while (score[i][1] < 0 || 100 < score[i][1]);

        student_score[i] = score[i][0] + score[i][1];
        subject_score[0] += score[i][0];  // 国語の合計
        subject_score[1] += score[i][1];  // 数学の合計
    }

    total_score = subject_score[0] + subject_score[1];
    japanese_ave = (double)subject_score[0] / NINZU;
    math_ave = (double)subject_score[1] / NINZU;
    total_ave = (double)total_score / 2;

    puts("------------------------------");
    puts("番号  国語  数学  合計  平均");
    puts("------------------------------");

    for (i = 0; i < NINZU; i++) {
        printf("%3d%6d%6d%6d%7.1f\n", i + 1, score[i][0], score[i][1], student_score[i], (double)student_score[i] / 2);
    }

    puts("------------------------------");
    printf("合計%6d%6d%6d\n", subject_score[0], subject_score[1], total_score);
    printf("平均%6.1f%6.1f%7.1f\n", japanese_ave, math_ave, total_ave );
    puts("------------------------------");

    return 0;
}
