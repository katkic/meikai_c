// 英語の点数と数学の点数の最高点を求める
#include <stdio.h>
#define NUMBER 5  // 学生の人数

// 要素数nの配列vの最大値を返す
int max_of(int v[], int n)
{
    int i;
    int max = v[0];

    for (i = 1; i < n; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

int main(void)
{
    int i;
    int english[NUMBER];
    int math[NUMBER];
    int max_e, max_m;

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("[%d] 英語 : ", i + 1);
        scanf("%d", &english[i]);
        printf("    数学 : ");
        scanf("%d", &math[i]);
    }
    max_e = max_of(english, NUMBER);
    max_m = max_of(math, NUMBER);

    printf("英語の最高点 = %d\n", max_e);
    printf("数学の最高点 = %d\n", max_m);
    return 0;
}
