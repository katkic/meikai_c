// 演習2-1
// 二つの整数値を読み込んで、前者の値が後者の何%であるかを表示する
#include <stdio.h>

int main(void)
{
    int x, y;

    puts("二つの整数を入力してください。");

    printf("整数x : ");
    scanf("%d", &x);

    printf("整数y : ");
    scanf("%d", &y);

    printf("xの値はyの%d%%です。\n", x * 100 / y);

    return 0;
}
