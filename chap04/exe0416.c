// 演習4-16
// 整数値を読み込んで、その整数値以下の奇数を表示するプログラム
#include <stdio.h>

int main(void)
{
    int i, num;

    printf("整数値 : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i += 2) {
        printf("%d ", i);
    }
    putchar('\n');
    return 0;
}
