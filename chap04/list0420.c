// 読み込んだ整数の個数だけ*を連続表示（好きなだけ繰り返す）
#include <stdio.h>

int main(void)
{
    int retry;

    do {
        int i, no;

        do {
            printf("正の整数を入力してください : ");
            scanf("%d", &no);
            if (no <= 0) {
                printf("\a正でない数を入力しないでください。\n");
            }
        } while (no <= 0);

        for (i = 1; i <= no; i++) {
            putchar('*');
        }
        putchar('\n');

        printf("もう一度？【Yes -> 0 / No -> 9】: ");
        scanf("%d", &retry);
    } while (retry == 0);
    return 0;
}
