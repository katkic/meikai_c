// 演習4-18
// 整数値を読み込んで、その個数だけ'*'を表示するプログラム
// ただし、5個表示するごとに改行すること
#include <stdio.h>

int main(void)
{
    int i, num;
    int cnt = 0;

    printf("何個*を表示しますか : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        if (cnt % 5 == 0) {
            putchar('\n');
        }
        putchar('*');
        cnt++;
    }
    putchar('\n');
    return 0;
}
