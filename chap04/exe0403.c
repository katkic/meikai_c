// 演習4-3
// 読み込んだ整数値を0までカウントダウン
// 負の値を読み込んだときに改行文字を出力しない

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("正の整数を入力してください : ");
    scanf("%d", &no);
    i = no;

    while (i >= 0)
    {
        printf("%d ", i);
        i--;
    }
    if (no >= 0) {
        printf("\n");
    }
    return 0;
}
