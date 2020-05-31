//二つの値を読み込んで、それらの値の差が10以下であれば「それらの差は10 以下です。」と、そうでなければ「それらの差は11以上です。」と表示する。論理ORを利用すること。
#include <stdio.h>

int main(void)
{
    int a, b, result;

    puts("二つの整数を入力してください。");
    printf("整数A : ");
    scanf("%d", &a);

    printf("整数B : ");
    scanf("%d", &b);

    result = a - b;

    if (result > 10 || result < -10) {
        puts("それらの差は11以上です。");
    } else {
        puts("それらの差は10以下です。");
    }

    return 0;
}
