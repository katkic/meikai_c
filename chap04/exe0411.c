// 演習4-11
// List4-10のプログラムを、結果の出力時に読み込んだ値も表示するように書き換える
#include <stdio.h>

int main(void)
{
    int no, tmp;

    do {
        printf("正の整数を入力してください : ");
        scanf("%d", &no);
        if (no <= 0) {
            puts("\a正でない数を入力しないでください。");
        }
    } while (no <= 0);

    tmp = no;
    printf("%dを逆から読むと", no);
    while (tmp > 0) {
        printf("%d", tmp % 10);
        tmp /= 10;
    }
    puts("です。");
    return 0;
}
