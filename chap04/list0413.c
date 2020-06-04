// 指示された個数だけ整数を読み込んで合計値と平均値を表示
#include <stdio.h>

int main(void)
{
    int i, num, tmp;
    int sum = 0;

    printf("整数は何個ですか : ");
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        printf("No.%d : ", i + 1);
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("合計値 : %d\n", sum);
    printf("合計値 : %.2f\n", (double)sum / num);
    return 0;
}
