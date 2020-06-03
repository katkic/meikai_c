// 読み込んだ整数値に応じてジャンケンの手を表示（0, 1, 2のみ受け付ける）
#include <stdio.h>

int main(void)
{
    int hand;  // 手

    do {
        printf("手を選んでください【0 →  グー / 1 →  チョキ / 2 →  パー】");
        scanf("%d", &hand);
    } while (!(0 <= hand && hand <= 2));

    printf("あなたは");
    switch (hand) {
        case 0:
            printf("グー");
            break;
        case 1:
            printf("チョキ");
            break;
        case 2:
            printf("パー");
            break;
    }
    printf("を選びました。\n");

    return 0;
}
