// 演習4-6
// 読み込まれた整数値以下である正の偶数を順に表示するプログラム

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("正の整数を入力してください : ");
    scanf("%d", &no);
    i = 2;

    while (i <= no) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
    if (no > 0) {
        printf("\n");
    }
    return 0;
}
