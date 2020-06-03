// 演習4-7
// 読み込まれた整数値以下である正の2のべき乗の数を順に表示するプログラム

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("正の整数を入力してください : ");
    scanf("%d", &no);
    i = 2;

    while (i <= no) {
        printf("%d ", i);
        i *= 2;
    }
    printf("\n");
    return 0;
}
