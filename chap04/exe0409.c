// 読み込んだ値の個数だけ + と - を交互に表示するプログラム
// なお、0以下の整数が入力された場合は、何も表示しない

#include <stdio.h>

int main(void)
{
    int no;
    int i = 1;

    printf("正の整数 : ");
    scanf("%d", &no);

    if (no > 0) {
        while (i <= no) {
            if (i % 2) {
                printf("+");
            } else {
                printf("-");
            }
            i++;
        }
    }
    return 0;
}
