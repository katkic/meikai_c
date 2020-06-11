// 演習6-4
// int型整数の４乗値を返す関数を作成
// int pow4(int x) {}
// 関数の内部でList6-3に示した関数 int sqr(int x) { return x * x }を利用すること

#include <stdio.h>

int sqr(int a)
{
    return a * a;
}

int pow4(int a)
{
    return sqr(a) * sqr(a);
}


int main(void)
{
    int n;

    puts("整数を入力してください");
    printf("整数n : ");
    scanf("%d", &n);

    printf("整数nの４乗値は%dです。\n", pow4(n));
    return 0;
}
