// 演習3-6
// 三つの整数値を読み込んで、その最小値を求めて表示する
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

    if (n2 < min) min = n2;
    if (n3 < min) min = n3;

    printf("三つの整数値の最小値は%dです。\n", min);

    return 0;
}
