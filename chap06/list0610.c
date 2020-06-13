// 最高点を求める
// ファイルスコープ
#include <stdio.h>
#define NUMBER 5  // 学生の人数

int tensu[NUMBER];  // 配列の定義
int top(void);      // 関数topの関数原型宣言（プロトタイプ宣言）

int main(void)
{
    extern int tensu[];  // 配列の宣言（省略可）
    int i;

    printf("%d人の点数を入力してください。\n", NUMBER);
    for (i = 0; i < NUMBER; i++) {
        printf("%d : ", i + 1);
        scanf("%d", &tensu[i]);
    }
    printf("最高点 = %d\n", top());
    return 0;
}

int top(void)
{
    extern int tensu[];  // 配列の宣言（省略可）
    int i;
    int max = tensu[0];

    for (i = 0; i < NUMBER; i++) {
        if (tensu[i] > max) {
            max = tensu[i];
        }
    }
    return max;
}
