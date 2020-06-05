// 演習4-25
// 読み込んだ整数の段数をもつ下向きのピラミッドを表示するプログラム
// 第i行目にはi % 10によって得られる数字を表示すること
// 11111
//  222
//   3

#include <stdio.h>

int main(void)
{
    int i, j, step;

    puts("下向き数字ピラミッドを作ります。");
    printf("何段ですか？ : ");
    scanf("%d", &step);

    for (i = 1; i <= step; i++) {
        for (j = 1; j <= i - 1 ; j++) {
            putchar(' ');
        }
        for (j = 1; j <= (step - i) * 2 + 1; j++) {
            printf("%d", i % 10);
        }
        putchar('\n');
    }
    return 0;
}
