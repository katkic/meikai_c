// 演習4-17
// 1からnまでの整数値の2乗値を表示するプログラム
#include <stdio.h>

int main(void)
{
    int i, n;

    printf("nの値 : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%dの2乗は%d\n", i, i * i);
    }
    return 0;
}
