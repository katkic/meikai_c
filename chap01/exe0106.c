// 演習1-6
// 読み込んだ整数値から6を減じた値を表示
#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください : ");
    scanf("%d", &no);

    printf("%dから6を減じると%dです。\n", no, no - 6);

    return 0;
}
