// 演習3-8
// list3-15のプログラムを、条件演算子でなくif分を用いて書きかえよ。
#include <stdio.h>

int main(void)
{
    int n1, n2, result;

    puts("二つの整数を入力してください。");
    printf("整数1 : ");
    scanf("%d", &n1);

    printf("整数2 : ");
    scanf("%d", &n2);

    if (n1 > n2) {
        result = n1 - n2;
    } else {
        result = n2 - n1;
    }

    printf("それらの差は%dです。\n", result);

    return 0;
}
