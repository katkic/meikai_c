// 読み込んだ整数値の個数だけ*を縦に連続して表示するプログラム
// 0以下の整数が入力された場合は、何も表示しないこと

#include <stdio.h>

int main(void)
{
    int no;
    int i = 0;

    printf("正の整数 : ");
    scanf("%d", &no);

    if (no > 0) {
        while (i < no) {
            puts("*");
            i++;
        }
    }
    return 0;
}
