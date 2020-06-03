// 演習4-4
// 読み込んだ整数値を0までカウントダウン（その2）
// 0ではなく1までカウントダウンする
// 入力された値が0以下であるときには、改行を行わない

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("正の整数を入力してください : ");
    scanf("%d", &no);
    i = no;

    while (i > 0) {
        printf("%d ", i--);
    }
    if (no > 0 ) {
        printf("\n");
    }
    return 0;
}
