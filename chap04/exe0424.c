// 演習4-24
// 読み込んだ整数の段数をもつピラミッドを表示する
#include <stdio.h>

int main(void)
{
    int i, j, step;

    puts("ピラミッドを作ります。");
    printf("何段ですか？ : ");
    scanf("%d", &step);

    for (i = 1; i <= step; i++) {
        for (j = 1; j <= step - i; j++) {
            putchar(' ');
        }
        for (j = 1; j <= i * 2 - 1; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
