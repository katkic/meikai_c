// 演習3-4
// 二つの整数値を読み込んで、それらの値が等しければ「AとBは等しいです。」と、Aの方が大きければ「AはBより大きいです。」とBの方が大きければ「AはBより小さいです。」と表示する
#include <stdio.h>

int main(void)
{
    int a, b;

    puts("二つの整数を入力してください。");

    printf("整数A : ");
    scanf("%d", &a);

    printf("整数B : ");
    scanf("%d", &b);

    if (a == b) {
        puts("AとBは等しいです。");
    } else if(a > b) {
        puts("AはBより大きいです。");
    } else {
        puts("AはBより小さいです。");
    }

    return 0;
}
