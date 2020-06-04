// 演習4-15
// 身長と標準体重の(p.37)の対応表を表示するプログラム
// なお、表示する身長の範囲（開始値、終了値、増分）は整数値として読み込んで、標準体重は小数部を2桁表示すること
// 標準体重 = (身長 - 100) * 0.9
#include <stdio.h>

int main(void)
{
    int i, start, end, step;

    printf("何cmから : ");
    scanf("%d", &start);
    printf("何cmまで : ");
    scanf("%d", &end);
    printf("何cmごと : ");
    scanf("%d", &step);

    for (i = start; i <= end; i += step) {
        printf("%dcm  %.2fkg\n", i, (i - 100) * 0.9);
    }
    return 0;
}
