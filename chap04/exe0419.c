// 演習4-19
// 読み込んだ整数値の全約数を表示するList4-15を書き換えて、約数の表示が終了した後に、約数の個数を表示するプログラム
#include <stdio.h>

int main(void)
{
    int i, num;
    int cnt = 0;

    printf("整数値 : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i);
            cnt++;
        }
    }
    printf("約数は%d個です。\n", cnt);
    return 0;
}
