// 演習3-3
// 整数値を読み込んで、その絶対値を表示する
#include <stdio.h>

int main(void)
{
    int num;

    printf("整数を入力してください : ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num;
    }

    printf("絶対値は%dです。", num);

    return 0;
}
