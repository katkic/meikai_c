// 演習6-5
// 1からnまでの全整数の和を求めて返却する関数を作成する。
// int sumup(int n) {}

#include <stdio.h>

int sumup(int n)
{
    int i, sum;

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main(void)
{
    int n;

    puts("1〜nまでの総和を求めます。");
    printf("整数を入力してください : ");
    scanf("%d", &n);
    printf("1〜%dまでの総和は、%dです。\n", n, sumup(n));
}
