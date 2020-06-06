// 配列の全要素に0.0を代入して表示
#include <stdio.h>

int main(void)
{
    int i;
    double x[7];

    for (i = 0; i < 7; i++) {
        x[i] = 0.0;
    }

    for (i = 0; i < 7; i++) {
        printf("x[%d] = %.1f\n", i, x[i]);
    }
    return 0;
}
