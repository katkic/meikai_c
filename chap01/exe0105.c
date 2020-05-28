// 演習1-5
// 読み込んだ整数値に12を加えた値を表示
#include <stdio.h>

int main(void)
{
    int no;

    printf("整数を入力してください : ");
    scanf("%d", &no);

    printf("%dに12を加えると%dです。\n", no, no + 12);

    return 0;
}
