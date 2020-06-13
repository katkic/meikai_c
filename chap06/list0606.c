// xのn乗を返す
#include <stdio.h>

double power(double x, int n)
{
    double tmp = 1.0;

    while(n-- > 0) {
        tmp *= x;
    }
    return tmp;
}

int main(void)
{
    double a;
    int b;

    puts("aのb上を求めます。");
    printf("実数a : ");
    scanf("%lf", &a);
    printf("整数b : ");
    scanf("%d", &b);

    printf("%.2fの%d乗は%.2fです。", a, b, power(a, b));
    return 0;
}
