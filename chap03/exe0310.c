// 演習3-10
// 三つの整数値を読み込んで、それらの値が全て等しければ「三つの値は等しいです。」と、どれか二つの値が等しければ「二つの値が等しいです。」と、そうでなければ「三つの値は異なります。」と表示する
#include <stdio.h>

int main(void)
{
    int a, b, c;

    puts("三つの整数を入力してください。");
    printf("整数A : ");
    scanf("%d", &a);

    printf("整数B : ");
    scanf("%d", &b);

    printf("整数C : ");
    scanf("%d", &c);

    if (a == b && b == c) {
        puts("三つの値は等しいです。");
    } else if (a == b || b == c || a == c) {
        puts("二つの値が等しいです。");
    } else {
        puts("三つの値は異なります。");
    }

    return 0;
}
