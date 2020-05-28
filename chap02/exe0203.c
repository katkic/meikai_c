// 演習2-3
// 読み込んだ実数値をそのまま表示する
#include <stdio.h>

int main(void)
{
    double num;

    printf("実数を入力してください : ");
    scanf("%lf", &num);

    printf("あなたは%fと入力しましたね。", num);

    return 0;
}
