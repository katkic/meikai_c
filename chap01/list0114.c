// 読み込んだ整数値の和（加算結果）を変数に格納して表示
#include <stdio.h>

int main(void)
{
    int n1, n2, wa;

    puts("二つの整数を入力してください。");

    printf("整数1 : ");
    scanf("%d", &n1);

    printf("整数2 : ");
    scanf("%d", &n2);

    wa = n1 + n2;

    printf("それらの和は%dです。\n", wa);

    return 0;
}
