// 演習3-1
// 二つの整数値を読み込んで、後者が前者の約数であれば「BはAの約数です。」と表示し、そうでなければ「AはBの約数ではありません。」と表示する。
#include <stdio.h>

int main(void)
{
    int a, b;

    puts("二つの整数を入力してください。");

    printf("整数A : ");
    scanf("%d", &a);

    printf("整数B : ");
    scanf("%d", &b);

    if (a % b) {
        puts("BはAの約数ではありません。");
    } else {
        puts("BはAの約数です。");
    }

    return 0;
}
