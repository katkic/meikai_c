// 二つの整数値を読み込んで、その商と剰余を表示
#include <stdio.h>

int main(void)
{
    int a, b;

    puts("二つの整数値を入力してください。");
    printf("数値a : ");
    scanf("%d", &a);

    printf("数値b : ");
    scanf("%d", &b);

    printf("aをbで割ると%dあまり%dです。\n", a / b, a % b);

    return 0;
}
