// 演習4-12
// 正の整数値を読み込んで、その桁数を表示するプログラム
#include <stdio.h>

int main(void)
{
    int no, i;
    int count = 0;

    do {
        printf("正の整数を入力してください : ");
        scanf("%d", &no);
        if (no <= 0) {
            printf("\a正でない数を入力しないでください。");
        }
    } while (no <= 0);

    i = no;
    while (i > 0) {
        i /= 10;
        count++;
    }
    printf("%dは%d桁です。", no, count);
}
