// 読み込んだ二つの整数値は等しいか（その2）
#include <stdio.h>

int main(void)
{
    int n1, n2;

    puts("二つの整数を入力してください。");
    printf("整数1 : ");    scanf("%d", &n1);
    printf("整数2 : ");    scanf("%d", &n2);

    if (n1 != n2) {
        puts("それらの値は違います。");
    } else {
        puts("それらの値は同じです。");
    }

    return 0;
}