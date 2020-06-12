// べき乗を求める
// 例えば、4.6の3乗は、4.6 ✕ 4.6 ✕ 4.6 = 97.336 です。
#include <stdio.h>

double power(double x, int n)
{
    int i;
    double tmp = 1.0;

    for (i = 1; i <= n; i++) {
        tmp *= x;
    }
    return tmp;
}

int main(void)
{
    double a;
    int b;

    puts("aのb乗を求めます。");
    printf("実数a : ");
    scanf("%lf", &a);
    printf("整数b : ");
    scanf("%d", &b);

    printf("%.2fの%d乗は%.3fです。\n", a, b, power(a, b));
    return 0;
}
