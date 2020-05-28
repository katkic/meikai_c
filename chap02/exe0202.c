// 演習2-1
// 二つの整数値を読み込んで、その和と積を表示する
#include <stdio.h>

int main(void)
{
    int a, b;

    puts("二つの整数を入力してください。");

    printf("整数a : ");
    scanf("%d", &a);

    printf("整数b : ");
    scanf("%d", &b);

    printf("それらの和は%dで積は%dです。\n", a + b, a * b);

    return 0;
}
