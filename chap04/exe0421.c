// 演習4-21
// 読み込んだ整数を辺の長さとしてもつ正方形を表示するプログラム
#include <stdio.h>

int main(void)
{
    int i, j, step;

    puts("正方形を作ります。");
    printf("何段ですか？ : ");
    scanf("%d", &step);

    for (i = 0; i < step; i++) {
        for (j = 0; j < step; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
