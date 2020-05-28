// 演習2-4
// 型と演算について確認するためのプログラム
#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4;
    double d1, d2, d3, d4;

    n1 = 1.8 * 2.0;
    n2 = 1.8 * 2;
    n3 = 1.8 / 2.0;
    n4 = 1.8 / 2;

    d1 = 1.8 * 2.0;
    d2 = 1.8 * 2;
    d3 = 1.8 / 2.0;
    d4 = 1.8 / 2;

    printf("n1 = %d\n", n1);
    printf("n2 = %d\n", n2);
    printf("n3 = %d\n", n3);
    printf("n4 = %d\n\n", n4);

    printf("d1 = %f\n", d1);
    printf("d1 = %f\n", d2);
    printf("d1 = %f\n", d3);
    printf("d1 = %f\n", d4);

    return 0;
}
