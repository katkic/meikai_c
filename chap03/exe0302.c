// 演習3-2
// list3-9の最後のelseを、else if (no < 0)に変更するとどうなるか
// 読み込んだ整数値の符号を判定
#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください : ");
    scanf("%d", &no);

    if (no == 0) {
        puts("その数は0です");
    } else if (no > 0) {
        puts("その数は正です");
    } else if (no < 0) {
        puts("その数は負です。");
    }

    return 0;
}
