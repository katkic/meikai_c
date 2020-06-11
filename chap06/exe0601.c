// 演習6-1
// 二つのint型整数の小さいほうの値を返す関数を作成する
// int min2(int a, int b) {}

#include <stdio.h>

int min2(int a, int b)
{
    return (a < b) ? a : b;
}

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数1 : ");
    scanf("%d", &n1);
    printf("整数2 : ");
    scanf("%d", &n2);

    printf("小さいほうの値は%dです。\n", min2(n1, n2));
    return 0;
}
