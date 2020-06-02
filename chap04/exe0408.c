// 演習4-3
// 読み込んだ値が1未満であれば改行文字を出力しないようにList4-8を書き換えたプログラム

#include <stdio.h>

int main(void)
{
    int no, i;

    printf("正の整数を入力してください : ");
    scanf("%d", &no);
    i = no;

    while (i-- > 0) {
        putchar('*');
    }
    if (no >= 1) {
        putchar('\n');
    }

    return 0;
}
