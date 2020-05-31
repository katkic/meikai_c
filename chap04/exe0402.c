// 二つの整数値を読み込んで、小さいほうの数以上で大きいほうの数以下の全整数を加えた値を表示するプログラム
#include <stdio.h>

int main(void)
{
    int a, b, big, small, count;
    int sum = 0;

    puts("二つの整数を入力してください。");
    printf("整数a : ");
    scanf("%d", &a);

    printf("整数b : ");
    scanf("%d", &b);

    if (a > b) {
        big = a;
        small = b;
    } else {
        big = b;
        small = a;
    }

    count = small;

    do {
        sum = sum + count;
        count = count + 1;
    } while (count <= big );

    printf("%d以上%d以下の全整数の和は%dです。", small, big, sum);

    return 0;
}
