// 演習4-14
// 1234567890を繰り返し表示するプログラムを作成する
// 読み込まれた整数ウィの個数だけ数字を表示すること
#include <stdio.h>

int main(void)
{
    int num;
    int count = 1;

    printf("正の整数を入力してください : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        if (count == 10) {
            count = 0;
        }
        printf("%d", count);
        count++;
    }
    return 0;
}
