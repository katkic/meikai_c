// 演習5-6
// 変数aがdouble型で、変数bがint型であるとする。以下の代入によって、それぞれの変数の値はどうなるか
#include <stdio.h>

int main(void)
{
    double a;
    int b;

    a = b = 1.5;
    printf("%.1f", a);
    return 0;
}
