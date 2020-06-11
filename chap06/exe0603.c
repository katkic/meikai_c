// 演習6-3
// int型整数の３乗値を返す関数を作成
// int cube(int x) {}

#include <stdio.h>

int cube(int a)
{
    return a * a * a;
}

int main(void)
{
    int n;

    puts("整数を入力してください。");
    printf("整数n : ");
    scanf("%d", &n);

    printf("整数nの３乗は%dです。\n", cube(n));
    return 0;
}
