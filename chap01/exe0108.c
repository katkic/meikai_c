// 演習1-8
// 読み込んだ二つの整数値の積を表示する
#include <stdio.h>

int main(void)
{
    int n1, n2, seki;

    puts("二つの整数を入力してください。");

    printf("整数1 : ");
    scanf("%d", &n1);

    printf("整数2 : ");
    scanf("%d", &n2);

    seki = n1 * n2;

    printf("それらの積は%dです。\n", seki);

    return 0;
}
