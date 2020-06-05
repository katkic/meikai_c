// 演習4-10
// 縦横のタイトルが付いた九九の表を表示するプログラム
#include <stdio.h>

int main(void)
{
    int i, j, k;

    for (i = 0; i <= 9; i++) {
        if (i == 0) {
            printf("   |");
            for (j = 1; j <= 9; j++) {
                printf("%3d", j);
            }
            putchar('\n');
            printf("---+----------------------------\n");
        } else {
            printf(" %d |", i);
            for (j = 1; j <= 9; j++) {
                printf("%3d", i * j);
            }
            putchar('\n');
        }
    }
    return 0;
}
