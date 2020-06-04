// 演習4-13
// 1からnまでの和を求めるプログラムを作成せよ。nの値はキーボードから読み込むこと

#include <stdio.h>

int main(void)
{
    int num;
    int sum = 0;

    printf("nの値 : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        sum += i;
    }
    printf("1から%dまでの和は%dです。", num, sum);
    return 0;
}
