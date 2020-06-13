// 仮引数を受け取らない関数
// 読み込んだ正の整数値を逆順に表示
#include <stdio.h>

int scan_pint(void)
{
    int tmp;

    do {
        printf("正の整数を入力してください : ");
        scanf("%d", &tmp);
        if (tmp < 1) {
            puts("\a正でない数を入力しないでください。");
        }
    } while (tmp < 1);
    return tmp;
}

int rev_int(int num)
{
    int tmp = 0;

    if (num > 0) {
        do {
            tmp = tmp * 10 + num % 10;  // 10倍しないと1の位の数が足されてしまう
            num /= 10;
            printf("%d\n", tmp);
        } while (num > 0);
    }
    return tmp;
}

int main(void)
{
    int nx = scan_pint();

    printf("反転した値は%dです。\n", rev_int(nx));
    return 0;
}
