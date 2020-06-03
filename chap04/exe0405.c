// 演習4-5
// 読み込んだ正の整数値までカウントアップ
// 0からではなく1からのカウントアップを行う
// 入力された値が0以下であるときには、改行を行わない

#include <stdio.h>

int main(void)
{
    int i, no;

    printf("正の整数を入力してください : ");
    scanf("%d", &no);

    i = 1;
    while (i <= no) {
        printf("%d ", i++);
    }
    if (no > 0) {
        printf("\n");
    }
    return 0;
}
