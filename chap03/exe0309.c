// 演習3-9
// 演習3-6のプログラムを、if文出なく条件演算子を用いて書きかえよ。
#include <stdio.h>

int main(void)
{
    int n1, n2, n3, min;

    puts("三つの整数値を入力してください。");
    printf("整数1 : ");
    scanf("%d", &n1);

    printf("整数2 : ");
    scanf("%d", &n2);

    printf("整数3 : ");
    scanf("%d", &n3);

    min = n1;
    min = (n2 < min) ? n2 : min;
    min = (n3 < min) ? n3 : min;

    printf("三つの整数値の最小値は%dです。\n", min);

    return 0;
}
