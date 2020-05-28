// 読み込んだ整数値の和（加算結果）を表示
#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");

    printf("整数を入力してください : ");
    scanf("%d", &n1);

    printf("整数を入力してください : ");
    scanf("%d", &n2);

    printf("それらの和は%dです。\n", n1 + n2);

    return 0;
}
