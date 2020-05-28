// 演習2-5
// 二つの整数値を読み込んで、前者の値が後者の何％であるかを実数で表示する
#include <stdio.h>

int main(void)
{
    int a, b;

    puts("二つの整数を入力してください。");

    printf("整数a : ");
    scanf("%d", &a);

    printf("整数b : ");
    scanf("%d", &b);

    printf("aの値はbの%fです。\n", (double)a / b * 100);

    return 0;
}
