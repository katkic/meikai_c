// 演習4-1
// List3-9を、入力・表示を好きなだけ繰り返せるように変更したプログラム
#include <stdio.h>

int main(void)
{
    int retry;

    do {
        int no;

        printf("整数値を入力してください : ");
        scanf("%d", &no);

        if (no == 0) {
            puts("その数は0です");
        } else if (no > 0) {
            puts("その数は正です");
        } else {
            puts("その数は負です。");
        }

        printf("まだ？<Yes →  0 / No →  9>");
        scanf("%d", &retry);

    } while (retry == 0);

    return 0;
}
